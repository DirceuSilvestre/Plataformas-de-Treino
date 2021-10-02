import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.
d = 100000
v = 1000000
pi = []
n = int(input())
for i in range(n):
    pi.append(int(input()))
pi.sort(reverse=True)
for j in range(1, n):
    x = pi[j - 1]
    y = pi[j]
    if (x - y) < v:
        v = x - y
# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)

print(v)
