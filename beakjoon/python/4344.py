import sys

n = int(sys.stdin.readline().rstrip())

for i in range(n):
    count=0
    arr = list(map(int, sys.stdin.readline().rstrip().split()))
    avg = sum(arr[1:])/arr[0]

    for j in arr[1:]:
        if j>avg:
            count+=1
    print(f'{(count/arr[0]*100):.3f}%')
