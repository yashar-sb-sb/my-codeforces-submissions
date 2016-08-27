def s():
    import re
    pat = re.compile('\d{2}-\d{2}-\d{4}')
    a = input()
    se = {}
    for i in range(len(a)-9):
        c = a[i:i+10]
        if pat.match(c):
            if c in se:
                se[c] += 1
            else:
                se[c] = 1
    print(max(se.items(),key=lambda x:x[1])[0])
s()
