def s():
    [x,y,n] = list(map(int,input().split()))
    res = (1,1)
    for b in range(1,n+1):
        a = int(round(b*x/y,0)+0.1)
        if abs(x/y-res[0]/res[1]) > abs(x/y-a/b):
            res = (a,b)
    print(*res,sep='/')
s()
