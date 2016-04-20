# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""
import datetime as datetime

def sorting(array):
    n_size = len(array)
    for i in range(0, n_size):
        for j in range(i + 1, n_size):
            if array[i] > array[j]:
                (array[i], array[j]) = (array[j], array[i])
    return array
    

if __name__ == "__main__":
    array_size = 100000
    array = [i for i in range(0, array_size)]
    time1 = datetime.datetime.now()
    array = sorting(array)
    time2 = datetime.datetime.now()
    miliseconds = (time2-time1).seconds*1000 + (time2-time1).microseconds/1000
    print("it took me " + str(miliseconds) + "milliseconds")
    
    #it took me 255278milliseconds
