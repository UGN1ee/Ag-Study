import sys


sm = 0
n = int(sys.stdin.readline().rstrip())
arr = list(map(int,sys.stdin.readline().rstrip().split()))
mx = max(arr)

for k in arr:
    sm += k/mx*100
    
print(sm/n)
