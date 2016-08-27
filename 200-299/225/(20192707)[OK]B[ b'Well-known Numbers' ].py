def s():
    [s,k] = list(map(int,input().split()))
    d = [0]
    d.append(1)
    t = 0
    r = []
    while t < s:
        t = sum(d[-min(k,len(d)):])
        d.append(t)
    for i in reversed(d):
        if i <= s:
            s -= i
            r.append(i)
            if i == 0:
                break
    print(len(r))
    print(*r)
s()
