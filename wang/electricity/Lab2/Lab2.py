#-*-coding:utf-8-*-

from Generate import *

if __name__ == "__main__":
    print('---***——模拟输入数据 (1个月)——***----\n')
    inputData = genData()
    print(inputData)

    event, day = genEvent()

    print('\n---***——每月选择的天数——***----\n')
    print(day)

    print('\n---***——每天发生的事件种类——***----\n')
    print('---***—— 0 -> 提前18小时 ——***----')
    print('---***—— 1 -> 提前两小时 ——***----\n')
    for e in event:
        print(e, end="  ")

    print('\n\n---***——根据事件所产生的对策 ——***----\n\n')
    print('---***—— 0 -> 2小时 ——***----')
    print('---***—— 1 -> 2小时 ——***----\n')

    policy = genPolicy(event)
    for p in policy:
        print(p, end="  ")

    print('\n\n---***——检验策略是否合理 ——***----\n')
    if (checkPolicy(policy)):
        print('The policy is legal!')
    else:
        print('The policy is illegal!')