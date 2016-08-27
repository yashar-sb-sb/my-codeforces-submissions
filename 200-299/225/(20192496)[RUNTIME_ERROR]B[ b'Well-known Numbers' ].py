def s():
    [s,k] = list(map(int,input().split()))
    d = [0]*k
    d.append(1)
    t = 0
    r = []
    while t < s:
        t = sum(d[-k:])
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
