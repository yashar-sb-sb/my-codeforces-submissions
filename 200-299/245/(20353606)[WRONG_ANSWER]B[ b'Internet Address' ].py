def s():
    a = input()
    r = 'http://' if a[0] == 'h' else 'ftp://'
    if a[0] == 'h':
        a = a[4:]
    else:
        a = a[3:]
    a = a.replace('ru','.ru/',1)
    print(r,a[:-1] if a[-1] == '/'else a,sep='')
s()
