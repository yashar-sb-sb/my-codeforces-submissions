def f():
	[n,a,b] = list(map(int,input().split(' ')))
	print((a+b%n-1)%n+1)
f()