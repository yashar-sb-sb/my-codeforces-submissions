def f(x):
    a = x[0]+x[2]+x[4]+x[3]+x[1]
    a = str(int(a)**5)
    return a[-5:]

print(f(input()))
