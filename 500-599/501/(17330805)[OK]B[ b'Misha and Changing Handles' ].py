def s():
	n = int(input())
	m = dict()
	r = []
	for _ in range(n):
		a = input().split(' ')
		i = len(r)
		if a[0] not in m:
			r.append(a)
			m[a[0]] = i
		else:
			i = m[a[0]]
			del m[a[0]]
			r[i][1] = a[1]
		m[r[i][1]] = i
	print(len(r))
	print(*[' '.join(i) for i in r], sep='\n')
s()