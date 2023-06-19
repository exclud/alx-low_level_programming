import ctypes

adder = ctypes.CDLL('./adder.so')

result = adder.add(5, 3)

print (f"The sum is : {result}")