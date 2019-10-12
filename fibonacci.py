import math
import os
import random
import re
import sys


A, B, N = (int(x) for x in input().split())
if N == 1: print(A)
elif N == 2: print(B)
else:
    for i in range(2, N):
        F = A + B*B
        A = B
        B = F
    print(F)

