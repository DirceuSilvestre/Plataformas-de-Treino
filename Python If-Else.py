#!/bin/python3

if __name__ == '__main__':
    n = int(input().strip()) 
    if (n%2) == 0:
        if n == 18 or n == 20:
            print('Weird')
        else:
            print('Not Weird')
    else:
        print('Weird')
