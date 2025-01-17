import numpy as np

a = np.array(list(map(int, input().split())))
print(np.sum(a % 3 == 0))