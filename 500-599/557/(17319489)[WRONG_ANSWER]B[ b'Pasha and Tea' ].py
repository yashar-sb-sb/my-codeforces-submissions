def f():
	[n,w] = list(map(int,input().split(' ')))
	a = list(map(int,input().split(' ')))
	mi = min(a)
	ma = max(a)
	print(format(min(min(mi,ma/2)*3*n,w),'.20f'))
f()