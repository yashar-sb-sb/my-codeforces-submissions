def s():
	[n,k,t] = list(map(int,input().split()))
	a = n*t//100
	b = n*t%100*k//100
	c = n - a - 1
	print(*[k for _ in range(a)],end='')
	if n > a:
		print(' 'if a>0 else '',b,end='',sep='')
	if c > 0:
		print('',*[0 for _ in range(c)])
s()
