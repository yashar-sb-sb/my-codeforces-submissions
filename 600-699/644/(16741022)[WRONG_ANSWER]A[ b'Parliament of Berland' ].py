[n,a,b] = list(map(int,input().split(' ')))

r = [(b+1)*[0] for _ in range(a+1)]
k = 0
t = []
for i in range(1,a+1):
    for j in range(1,b+1):
        if k < n :
            t.append(k+1)
            k += 1
        for it in t:
            if (r[i-1][j] == 0 or r[i-1][j]%2 != it%2) and (r[i][j-1] == 0 or r[i][j-1]%2 != it%2):
                r[i][j] = it
                break
        if r[i][j] != 0:
            t.remove(r[i][j])
if k == n:
    for i in r[1:]:
        print(*i[1:])
else:
    print(-1)
