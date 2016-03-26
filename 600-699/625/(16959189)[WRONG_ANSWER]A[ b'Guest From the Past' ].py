[n,a,b,c] = list(map(int,[input() for _ in range(4)]))
s = 0
if n > c:
    n -= c
    s += n//(b-c)
    n = n%(b-c) + c
print(s+n//a)
