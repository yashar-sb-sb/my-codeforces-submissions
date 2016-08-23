def s():
	n = int(input())
	a = [tuple(map(int,input().split()))for _ in range(n)]
	l = [0]*n
	r = [0]*n
	cm = 0
	for i, v in enumerate(a):
		cm = max(v[1],cm)
		l[i] = cm
	cm = 0
	for i, v in reversed(list(enumerate(a))):
		cm = max(v[1],cm)
		r[i] = cm
	s = sum(i[0] for i in a)
	r.append(0)
	l[-1] = 0
	for i,v in enumerate(a):
		print((s-v[0])*max(l[i-1],r[i+1]),end = ' ')
s()