def f():
	input()
	a = list(map(int,input().split(' ')))
	f = (10**6+1)*[0]
	l = (10**6+1)*[0]
	c = (10**6+1)*[0]
	for i in range(len(a)-1, -1,-1):
		f[a[i]] = i
	for i in range(len(a)):
		l[a[i]] = i
		c[a[i]] += 1
	m = max(c)
	m = min([i for i in range(len(a)) if c[a[i]] == m], key = lambda x: l[a[x]]-f[a[x]])
	print(f[a[m]]+1, l[a[m]]+1)
f()