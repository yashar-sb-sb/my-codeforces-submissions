def s():
    input()
    a = list(map(int,input().split()))
    a.sort(reverse = True)
    if a[-1] == 0:
        r = sum(a) % 3
        if r == 0:
            print(*a,sep = '')
        else:
            for i,v in reversed(list(enumerate(a))):
                if v%3 == r:
                    a.pop(i)
                    print(*a,sep = '')
                    break
            else:
                c = 0
                for i,v in reversed(list(enumerate(a))):
                    if v == 3 - r:
                        c+=1
                        a.pop(i)
                        if c == 2:
                            print(*a,sep = '')
                            break
                else:
                    print(-1)
    else:
        print(-1)
s()
