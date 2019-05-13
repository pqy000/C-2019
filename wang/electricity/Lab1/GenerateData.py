#-*-coding:utf-8-*-
import random
import bokeh
import pandas as pd
from genData import *

from bokeh.plotting import figure,show
from bokeh.models import ColumnDataSource
from bokeh.transform import dodge
from bokeh.core.properties import value
import warnings
warnings.filterwarnings('ignore')
from bokeh.io import *

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
        temp = sum(day[40:69]) / 28
        inputData.append(int(temp))
    return inputData

def selectDay(total = 30):
    # 假设6月的1日是星期一
    # 1 表示可选日期
    # 0 表示周六周日
    # 2 表示每月开始的5天
    month = [0, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
    day = []
    for i in range(8):
        while(1):
            dayIndex = random.randint(1, total)
            if(month[dayIndex] == 1):
                break
        month[dayIndex] = 0;
        day.append(dayIndex);
    return day

def calAvg(day, inputData):
    month = [0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
             1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
    avgV = 0
    for i in range(5):
        day = day - 1
        avgV += inputData[day]
    avgV = avgV / 5
    return avgV

def calPer(days, inputData, basicV = 1800):
    saveV = []
    avg = []
    # 计算转化率
    print('\n---***——被选中8天的前五天的平均值 (除去周末)——***----\n')
    print('平均值  当天值\n')
    for day in days:
        avgV = calAvg(day, inputData)
        avg.append(avgV)

        print(avgV, inputData[day])
        diff = (avgV - inputData[day]) if (avgV - inputData[day]) > 0 else 0
        saveV.append(diff)

    perc = sum(saveV) / basicV
    print(perc)
    return saveV, perc, avg

def calDiscount(perc):
    discount = 1
    if (0 <= perc < 0.6):
        discount = 1
    elif(0.6 <= perc < 0.8):
        discount = 0.9
    elif(0.8 <= perc < 1):
        discount = 0.8
    elif(perc >= 1):
        discount = 0.7
    return discount

def calBonus(saveV, discount, price = 1.2):
    bonus = 0
    for elem in saveV:
        bonus += elem * price * 7 * discount
    return bonus

def draw(inputData, days, avg):
    selData = []
    for day in days: selData.append(inputData[day])

    p = figure(plot_width=1200, plot_height=600,
               toolbar_location="above")
    num = [elem for elem in range(31)]
    p.vbar(x=num, width=0.5, bottom = 3000, top=inputData,color = 'orange')
    p.vbar(x=days, width=0.5, bottom = 3000, top=selData, color = 'yellow')
    #p.vbar(x=[days,days], width=[0.25,0.25], bottom=[2000,2000], top=[selData,avg], color=['yellow','blue'])
    p.circle(days, avg, size=15, color='navy')
    #p.line(days, avg, line_width=2, color='navy')

    show(p)

# print('---***——测试输入数据 (1个月)——***----\n')
# inputData = genData()
# print(inputData)
#
# print('\n---***——每月选择的天数 (除去周末)——***----\n')
# days = selectDay()
# print(days)
#
# saveV, perc, avg = calPer(days = days, inputData = inputData)
#
# print('\n---***——被选中的8天的实际抑制容量——***----\n')
# print(saveV)
#
# print('\n---***——执行率——***----')
# print('---***—— 8天实际抑制容量的平均值 / 理论抑制容量 ——***----\n')
# print(perc)
#
# print('\n---***——执行率得出扣减比例——***----\n')
# discount = calDiscount(perc)
# print(discount)
#
# print('\n---***——本月根据合同获得的奖励——***----\n')
# bonus = calBonus(saveV, discount)
# print(bonus)
#
# draw(inputData,days, avg)



