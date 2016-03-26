[a,b] = list(map(int,input().split(' ')))
if a < b:
    a, b = b, a
def f(a, b):
    if a < b:
        a, b = b, a
    return a//2 if a < 3 else (a-1)//2 +  f(b + (a-1)//2, a-(a-1)//2*2)
print(f(a,b))
