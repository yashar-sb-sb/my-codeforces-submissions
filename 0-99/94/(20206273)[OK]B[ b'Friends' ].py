def s():
    m = int(input())
    s = set(tuple(sorted(list(map(int,input().split()))))for _ in range(m))
    for i in range(1,4):
        for j in range(i+1,5):
            for k in range(j+1,6):
                r = ((i,j)in s) + ((j,k)in s) + ((i,k)in s)
                if r%3 == 0:
                    print('WIN')
                    return
    print('FAIL')
s()
