def s():
	[n,m,k] = list(map(int,input().split()))
	G = dict()
	for _ in range(m):
		t = list(map(int,input().split()))
		if t[0]>t[1]:
			t[0],t[1] = t[1],t[0]
		if (t[0],t[1]) in G:
			G[(t[0],t[1])] = min(G[(t[0],t[1])],t[2])
		else:
			G[(t[0],t[1])] = t[2]
	a = set(map(int,input().split()if k else ''))
	r = 1e9+1
	for k,v in G.items():
		s = (k[0] in a)+(k[1] in a)
		if s == 1:
			r = min(r,v)
	print(-1 if r == 1e9+1 else r)
s()