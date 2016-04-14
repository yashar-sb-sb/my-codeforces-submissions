def f():
	[n,w] = list(map(int,input().split(' ')))
	a = list(map(int,input().split(' ')))
	a.sort()
	print(format(min(min(a[0],a[n]/2)*3*n,w),'.20f'))
f()