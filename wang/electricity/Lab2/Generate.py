#-*-coding:utf-8-*-
import random
import numpy as np
from genData import *

# def genData(minV = 4000, maxV = 6000):
#     inputData = []
#     for i in range(31):
#         inputData.append(random.randint(minV, maxV))
#     #写入文件
#     with open('data.txt', 'w') as f:
#         for elem in inputData:
#             num = str(elem) + ' '
#             f.write(num)
#     return inputData

def genData():
    inputData = []
    monthData = type2()

    for day in monthData:
        temp = max(day[56:65])
        inputData.append(int(temp))

    return inputData


def randIndex(a = 0.5, b = 0.5):
    p = np.array([a, b])
    index = np.random.choice([0, 1], p = p.ravel())
    return index

def genEvent():
    # 假设每月的事件分为提前18小时与2小时的A B事件
    # 0 -> 事件A
    # 1 -> 事件B
    # 概率比为7:3
    # 指定每三天一次 [ 8, 11, 15, 18, 22, 25, 29]
    day = [8, 11, 15, 18, 22, 25, 29]
    event = []
    for elem in day:
        temp = []
        temp.append(elem)
        temp.append(randIndex(0.6, 0.4))
        event.append(temp)
    return event, day


def genPolicy(event):
    # 采取对策分为两种 每天限电2或4小时 记为策略 A,B
    # 0 -> 2小时
    # 1 -> 4小时
    # 且不可超过36小时
    # 目前采取策略是
    # 提前18小时 限电4小时
    # 提前2小时 限电2小时
    policy = []
    for elem in event:
        temp = []
        if(elem[1] == 0):
            temp.append(elem[1])
            temp.append(randIndex(0.6, 0.4))
        elif(elem[1] == 1):
            temp.append(elem[1])
            temp.append(randIndex(0.2, 0.8))
        policy.append(temp)
    return policy

def checkPolicy(policy):
    totalHour = 0

    for elem in policy:
        if(elem[1] == 0):
            totalHour += 2
        elif(elem[1] == 1):
            totalHour += 4
    print(totalHour)
    if(totalHour >= 36):
        return 0
    elif(0 <= totalHour < 36):
        return 1

def calAvg(day, inputData):
    month = [0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1]
    avgV = 0
    for i in range(5):
        day = day - 1
        while(month[day] != 1): day = day - 1
        avgV += inputData[day]
    avgV = avgV / 5
    return avgV

def calPer(days, inputData, basicV = 1800):
    saveV = []
    avg = []
    perc = []
    # 计算转化率
    print('\n---***——被选中8天的前五天的平均值 (除去周末)——***----\n')
    print('平均值  当天值\n')
    for day in days:
        avgV = calAvg(day, inputData)
        avg.append(avgV)
        print(avgV, inputData[day])
        diff = (avgV - inputData[day]) if (avgV - inputData[day]) > 0 else 0
        saveV.append(diff)
    for elem in saveV:
        perc.append(elem / basicV)
    print(perc)
    return saveV, perc, avg

# def calDiscount(perc, saveV, policy):
#     bonus = []
#     discount = 1
#     for elem in saveV:

    # if (0 <= perc < 0.6):
    #     discount = 1
    # elif(0.6 <= perc < 0.8):
    #     discount =
    # elif(0.8 <= perc < 1):
    #     discount = 0.8
    # elif(perc >= 1):
    #     discount = 0.7
    # return discount

#
# inputData = genData()
# print(inputData)

#avg = calAvg(day, inputData)
