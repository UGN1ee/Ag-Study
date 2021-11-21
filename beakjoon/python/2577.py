import sys

fst = int(sys.stdin.readline().rstrip())
snd = int(sys.stdin.readline().rstrip())
trd = int(sys.stdin.readline().rstrip())

arr = list(str(fst*snd*trd))

for i in range(10):
    print(arr.count(str(i)))
