def s():
    [n,m] = list(map(int,input().split()))
    a = [list(reversed(list(map(int,input().split()))))for _ in range(m)]
    a.sort(reverse=True)
    r = 0
    for i in a:
        if n > 0:
            r += min(n,i[1])*i[0]
            n -= min(n,i[1])
        else:
            break
    print(r)
s()
