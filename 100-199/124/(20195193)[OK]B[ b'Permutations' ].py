import itertools
def s():
    [n,k] = list(map(int,input().split()))
    a = [list(input())for _ in range(n)]
    r = 10**9
    for i in itertools.permutations(range(k)):
        mi = 10**9
        ma = 0
        for j in a:
            c = int(''.join([str(j[i[l]]) for l in range(k)]))
            mi = min(mi,c)
            ma = max(ma,c)
        r = min(ma-mi,r)
    print(r)
s()
