[n,a,b] = list(map(int,input().split(' ')))

r = [b*[0] for _ in range(a)]
k = 0
for i in range(a):
    for j in range(b):
        if k == n:
            break
        if (i+j)%2 == k%2:
            r[i][j] = k+1
            k += 1
    else:
        continue
    break
if k == n:
    for i in r:
        print(*i)
else:
    print(-1)
