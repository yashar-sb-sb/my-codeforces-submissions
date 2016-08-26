def s():
    s = list(map(int,input().split()))
    c = list(map(int,input().split()))
    n = int(input())
    r = 0
    for _ in range(n):
        v = list(map(int,input().split()))
        a = [c[0]-1 if v[0]<0 else s[0]-c[0], c[1]-1 if v[1]<0 else s[1]-c[1]]
        t = min(a[0]//abs(v[0]) if v[0]else 10**9,a[1]//abs(v[1]) if v[1] else 10**9)
        r += t
        c[0] += t * v[0]
        c[1] += t * v[1]
    print(r)
s()
