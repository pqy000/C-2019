# import numpy as np
# import random
# import matplotlib.pyplot as plt
#
# x = np.linspace(0, 2 * np.pi, 100)
# noise=np.random.normal(0,0.08,100)
# plt.ylim(ymax = 2.0, ymin = 0.3)
# y1= x * 0.0 + 1.0 + noise
#
# plt.plot(x, y1)
#
# plt.title('line chart')
# plt.xlabel('x')
# plt.ylabel('y')
#
# plt.show()
#
import numpy as np
import random
import matplotlib.pyplot as plt
noise=np.random.normal(0,0.1,96)

X = np.linspace(-4, 4, 96)
Y = abs(.25 * (X + 4.) * (X + 1.) * (X - 2.) + noise) * random

plt.title('$f(x)=\\frac{1}{4}(x+4)(x+1)(x-2)$')
plt.plot(X, Y, c = 'g')
plt.show()

# import numpy as np
# import matplotlib.pyplot as plt
#
# def pdf(X, mu, sigma):
#    a = 1. / (sigma * np.sqrt(2. * np.pi))
#    b = -1. / (2. * sigma ** 2)
#    return a * np.exp(b * (X - mu) ** 2)
#
# X = np.linspace(-6, 6, 1000)
#
# noise=np.random.normal(0,0.03,1000)
#
# # for i in range(3):
# samples = np.random.standard_normal(10)
# mu, sigma = np.mean(samples), np.std(samples)
# plt.plot(X, pdf(X, mu, sigma) + noise, color = '.66')
#
# plt.plot(X, pdf(X, 0., 1.) + noise, color = 'b')
# plt.show()