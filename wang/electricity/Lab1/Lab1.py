#-*-coding:utf-8-*-
#月减8日型
from GenerateData import calBonus
from GenerateData import calDiscount
from GenerateData import calPer
from GenerateData import draw
from GenerateData import genData
from GenerateData import selectDay

if __name__ == '__main__':

    print('---***——模拟输入数据 (1个月)——***----\n')
    inputData = genData()
    print(inputData)

    print('\n---***——每月选择的天数 (除去周末)——***----\n')
    days = selectDay()
    print(days)

    saveV, perc, avg = calPer(days = days, inputData = inputData)

    print('\n---***——被选中的8天的实际抑制容量——***----\n')
    print(saveV)

    print('\n---***——执行率——***----')
    print('---***—— 8天实际抑制容量的平均值 / 理论抑制容量 ——***----\n')
    print(perc)

    print('\n---***——执行率得出扣减比例——***----\n')
    discount = calDiscount(perc)
    print(discount)

    print('\n---***——本月根据合同获得的奖励——***----\n')
    bonus = calBonus(saveV, discount)
    print(bonus)

    draw(inputData, days, avg)


