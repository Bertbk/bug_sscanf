
from ctypes import *
import matplotlib.pyplot as plt

lib = cdll.LoadLibrary("./test.so")

success = lib.bug()
print(success)