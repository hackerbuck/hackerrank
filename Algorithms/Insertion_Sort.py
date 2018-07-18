#!/bin/python

import math
import os
import random
import re
import sys

# Complete the insertionSort2 function below.
def insertionSort2(n, arr):
    for i in range(1,len(arr)):
        pick = arr[i]
        prev_pos = i-1
        while prev_pos >= 0 and pick < arr[prev_pos]:
            arr[prev_pos+1] = arr[prev_pos]
            arr[prev_pos] = pick
            prev_pos -= 1
        print ' '.join(str(x) for x in arr)    
        
if __name__ == '__main__':
    n = int(raw_input())

    arr = map(int, raw_input().rstrip().split())

    insertionSort2(n, arr)
