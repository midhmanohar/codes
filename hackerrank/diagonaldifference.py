#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the diagonalDifference function below.
def diagonalDifference(arr):
    m = 0
    n = len(arr) - 1 
    left = 0
    right = 0
    for i in arr:
        left += i[m]
        right += i[n]
        m+=1
        n-=1
    sum = 0
    if left > right :
        sum = left - right
    else:
        sum = right -left
    return sum


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)

    fptr.write(str(result) + '\n')

    fptr.close()