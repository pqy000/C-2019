import numpy as np

def randIndex(a = 0.5, b = 0.5):
    p = np.array([a, b])
    index = np.random.choice([0, 1], p = p.ravel())
    return index