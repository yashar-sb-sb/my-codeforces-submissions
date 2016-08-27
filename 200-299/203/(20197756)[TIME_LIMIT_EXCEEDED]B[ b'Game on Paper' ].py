def s():
    [n,m] = list(map(int,input().split()))
    d = {}
    r = -1
    def check(x,y):
        if (x,y) in d:
            d[(x,y)] += 1
            if d[(x,y)] == 9:
                return True
        else:
            d[(x,y)] = 1
            return False
    for i in range(m):
        [x,y] = list(map(int,input().split()))
        if check(x,y) or check(x+1,y+1) or check(x+1,y-1) or check(x-1,y+1) or check(x-1,y-1) or check(x,y+1) or check(x,y-1) or check(x-1,y) or check(x+1,y):
            r = i + 1
            break
    print(r)
s()
