t = int(input())
for i in range(0,t):
    n = int(input())
    l = list(map(int,input().split()))
    sl = set(l)
    if len(l)==len(sl):
        print("NO")
    else:
        print("YES")