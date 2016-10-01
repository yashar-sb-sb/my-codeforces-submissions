def s():
    [n,k,x] = list(map(int,input().split()))
    a = list(map(int,input().split()))
    a = [[a[i],i] for i in range(len(a))]
    a.sort(key = lambda x:abs(x[0]))
    z = 0
    neg = 0
    for i in a:
        i = i[0]
        if i == z:
            z += 1
        if i < 0:
            neg += 1
    if neg %2 == 0:
        if a[0][0] == 0:
            a[0][0] = -x
            k -= 1
        elif a[0][0] < 0:
            while k > 0 and a[0][0] <= 0:
                a[0][0] += x
                k -= 1
        else:
            while k > 0 and a[0][0] >= 0:
                a[0][0] -= x
                k -= 1
    a.sort(key = lambda x:abs(x[0]))
    i = 0
    while k > 0:
        if i >= n:
            i = 0
        while k > 0 and abs(a[i][0]) <= abs(a[0][0]):
            if a[i][0] < 0:
                a[i][0] -= x
            else:
                a[i][0] += x
            k -= 1
        i += 1
    b = n*[0]
    for i in a:
        b[i[1]] = i[0]
    print(*b)
s()
