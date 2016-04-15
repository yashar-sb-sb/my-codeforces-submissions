def s():
	n = int(input())
	f = [[0,0] for _ in range(368)]
	for _ in range(n):
		[g,a,b] = input().split(' ')
		g = g == 'M'
		a = int(a)
		b = int(b) + 1
		f[a][g] += 1
		f[b][g] -= 1
	r = 0
	t = [0,0]
	for i in f:
		t[0] += i[0]
		t[1] += i[1]
		r = max(r,min(t))
	print(2*r)
s()