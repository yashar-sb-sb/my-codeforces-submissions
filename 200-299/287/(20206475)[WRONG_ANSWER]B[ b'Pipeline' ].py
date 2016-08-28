def s():
    [n,k] = list(map(int,input().split()))
    n-=1
    if k*(k-1)/2 < n:
        print(-1)
        return
    l = k*(k-1)/2 - n
    import math
    a = int((-1+math.sqrt(1+8*l))/2)
    print(k-a-1)
s()
