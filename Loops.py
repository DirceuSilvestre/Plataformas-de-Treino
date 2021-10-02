from math import pow
if __name__ == '__main__':
    n = int(input())
    p = list(range(0, n))
    for i in range(n):
        print('{:.0f}'.format(pow(p[i], 2)))
