#!/bin/python3

import os
import sys

#
# Complete the timeConversion function below.
#
def timeConversion(s):
    if(int(s[:2]) < 12 and s[-2:] == 'PM'):
        num = str(int(s[:2]) + 12 ) 
        list1 = list(s)
        list1[0] = num[0]
        list1[1] = num[1]
        list1[-1] = ''
        list1[-2] = ''
        s = ''.join(list1)
        return s
    if(int(s[:2]) == 12 and s[-2:] == 'AM'):
        num = '00' 
        list1 = list(s)
        list1[0] = num[0]
        list1[1] = num[1]
        list1[-1] = ''
        list1[-2] = ''
        s = ''.join(list1)
        return s
    else:
        list1 = list(s)
        list1[-1] = ''
        list1[-2] = ''
        s = ''.join(list1)
        return s



if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    f.write(result + '\n')

    f.close()