def s():
    n = int(input())
    a = [tuple(map(int,input().split())) for _ in range(n)]
    l = sum(i[0] for i in a)
    h = 0
    a.sort(key = lambda x: x[1]-1.1*x[0])
    for ll,hh in a:
        if l - ll >= h + hh:
            l -= ll
            h += hh
    print(l)
s()
