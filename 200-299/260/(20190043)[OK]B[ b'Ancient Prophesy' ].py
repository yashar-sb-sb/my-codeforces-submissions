def s():
    import re
    pat = re.compile('\d{2}-\d{2}-\d{4}')
    a = input()
    se = {}
    def check(x):
        m = [0,31,28,31,30,31,30,31,31,30,31,30,31]
        return x[2] >= 2013 and x[2] <= 2015 and x[1] >= 1 and x[1] <= 12 and x[0] >= 1 and x[0] <= m[x[1]]

    for i in range(len(a)-9):
        c = a[i:i+10]
        if pat.match(c) and check(list(map(int,c.split('-')))):
            if c in se:
                se[c] += 1
            else:
                se[c] = 1
    print(max(se.items(),key=lambda x:x[1])[0])
s()
