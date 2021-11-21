n = int(input())
a = input().split(" ")

mx = int(a[0])
mn = int(a[0])

for i in range(0,n):
    if int(a[i])>mx:
        mx = int(a[i])
    if int(a[i])<mn:
        mn = int(a[i])

print("{0} {1}".format(mn,mx))
