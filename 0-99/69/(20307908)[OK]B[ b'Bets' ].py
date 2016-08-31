def s():
    di = dict()
    def ad(x):
        if x in di:
            di[x] += 1
        else:
            di[x] = 1
    def de(x):
        di[x] -= 1
        if di[x] == 0:
            del di[x]
    [n,m] = list(map(int,input().split()))
    a = []
    for i in range(m):
        [l,r,t,c] = list(map(int,input().split()))
        a.append(((l,-1),(t,i,c)))
        a.append(((r,1),(t,i,c)))
    a.append(((n+1,0),(0,0,0)))
    a.sort()
    ad((1001,0,0))
    p = 0
    i = 0
    res = 0
    while a[i][0][0] <= n:
        cur = a[i][0][0]-1
        res += (cur-p)*min(di)[2]
        p = cur
        cur += 1
        while a[i][0][1] == -1 and a[i][0][0] == cur:
            ad(a[i][1])
            i += 1
        res += (cur-p)*min(di)[2]
        while a[i][0][1] == 1 and a[i][0][0] == cur:
            de(a[i][1])
            i += 1
        p = cur
    print(res)
s()
