def s():
    [w,m,k] = list(map(int,input().split()))
    r = 0
    c = 1
    while c>0:
        l = len(str(m))
        c = min(w//(l*k),10**l-m)
        m += c
        w -= c*l*k
        r += c
    print(r)
s()
