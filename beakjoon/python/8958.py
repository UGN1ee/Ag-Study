import sys

n = int(sys.stdin.readline().rstrip())

for i in range(n):
    temp = sys.stdin.readline().rstrip()
    score = 0
    count = 0
    for j in temp:
        if j=='O':
            count+=1
            score += count
        else:
            count = 0
    print(score)
