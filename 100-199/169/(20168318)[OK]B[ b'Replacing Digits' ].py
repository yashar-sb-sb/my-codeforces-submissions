def s():
	a = list(input())
	s = list(input())
	s.append('0')
	s.sort(reverse=True)
	it = iter(s)
	q = next(it)
	for i,v in enumerate(a):
		if q>v:
			a[i] = q
			q = next(it)
	print(*a,sep = '')
s()