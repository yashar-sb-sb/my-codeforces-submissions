def s():
	[n,k] = list(map(int,input().split()))
	a = sorted([input()for i in range(n)],key = lambda x: len(x))
	t = 0
	r = 0
	rr = 0
	kk = True
	p = input()
	for i in a:
		if t == k:
			t = 0
			r+=5
		t += 1
		r += 1
		if kk and len(i) == len(p):
			kk = False
			print(r,end = ' ')
		if len(i) > len(p):
			print(rr)
			return
		rr = r
	print(rr)
s()