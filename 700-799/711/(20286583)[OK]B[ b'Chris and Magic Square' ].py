def s():
    n = int(input())
    a = [list(map(int,input().split())) for _ in range(n)]
    e = [0,0]
    if n == 1:
        print(1)
        return
    for i in range(n):
        for j in range(n):
            if a[i][j] == 0:
                e = [i,j]
                break
    ans = 0
    f = 0
    if e[0] == 0:
        f = sum(a[1])
        ans = f-sum(a[0])
    else:
        f = sum(a[0])
        ans = f-sum(a[e[0]])
    if(ans <= 0):
        print(-1)
        return
    a[e[0]][e[1]] = ans
    for k in range(n):
        if sum(a[k]) != f:
            print(-1)
            return
        if sum(a[l][k] for l in range(n)) != f:
            print(-1)
            return
    if sum(a[k][k] for k in range(n)) != f or sum(a[k][n-1-k] for k in range(n)) != f:
        print(-1)
        return
    print(ans)
s()
