def s():
	input()
	l = [[]for _ in range(100)]
	a = list(map(int,input().split()))
	for i,v in enumerate(a):
		l[v].append(i)
	c = 0
	fs = [0,0]
	for i in l:
		if len(i) == 0:
			continue
		en = iter(i)
		a[next(en)] = 1 + c
		fs[c] += 1
		for e in en:
			a[e] = 2 - c
		fs[1-c] += 1
		if len(i) == 1:
			c = 1 - c
			fs[c] -= 1
	print(fs[0]*fs[1])
	print(*a)