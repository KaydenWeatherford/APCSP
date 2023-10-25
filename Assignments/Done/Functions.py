import MyLibrary
import numpy as np
# from MyLibrary import area, perim

# arr = np.array([1,2,3])
# arr2 = np.array([6,7,8])
# print(arr - arr2)

len = 5
wid = 10
a = MyLibrary.area(len, wid)
p = MyLibrary.perim(len, wid)
print(f"Area: {a}, Perimeter: {p}")