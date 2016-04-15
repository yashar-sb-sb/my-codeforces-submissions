def s():
	[n,l,r,x] = list(map(int,input().split(' ')))
	l -= 1
	r += 1
	a = list(map(int,input().split(' ')))
	s = 0
	for i in range(1, 1<<n):
		ind = 0
		k = []
		while i:
			if i & 1:
				k.append(a[ind])
			ind += 1
			i >>= 1
		if max(k)-min(k) >= x and l < sum(k) < r:
			s += 1
	print(s)
s()