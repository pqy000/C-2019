import numpy as np
import random
import math


def type1():
    monthData = []
    for i in range(1, 31):
        noise = np.random.normal(0,0.1,96)
        X = np.linspace(-4, 4, 96)
        Y = (.25 * (X + 4.) * (X + 1.) * (X - 2.) + noise ) * random.randint(100, 150) + random.randint(3500, 4000)
        monthData.append([int(elem) for elem in Y])
    #plt.plot(np.linspace(-4, 4, 96), monthData[1], c = 'g')
    #plt.show()

    return monthData

def gaussian(x, mean, sigma):
    return np.exp(-1 * ((x - mean) ** 2) / (2 * (sigma ** 2))) / (math.sqrt(2 * np.pi) * sigma)

def type2():
    monthData = []
    for i in range(1, 31):
        noise = np.random.normal(0, 0.01, 96)
        X = np.linspace(-4, 4, 96)
        Y = gaussian(X, 0, 1)
        Y += noise
        monthData.append([(elem * 5000 + random.randint(3000, 3200)) for elem in Y])
    # plt.plot(np.linspace(-4, 4, 96), monthData[1], c='g')
    # plt.show()
    return monthData

def type3():
    monthData = []
    for i in range(1, 31):
        noise = np.random.normal(0, 70, 96)
        X = np.linspace(-4, 4, 96)
        Y = X * 0 + 5000 + noise
        monthData.append(Y)
    # plt.ylim(top = 7000, bottom = 3000)
    # plt.plot(np.linspace(-4, 4, 96), monthData[1], c='g')
    # plt.show()
    return monthData

monthData1 = type1()
monthData2 = type2()
monthData3 = type3()
