def s():
	def gcd(a,b):
		if a < b:
			a, b = b, a
		if b:
			return gcd(b,a%b)
		else:
			return a
	pq = list(map(int,input().split()))
	g = gcd(*pq)
	pq[0] //= g
	pq[1] //= g
	input()
	a = list(map(int,input().split()))
	r = [1,0]
	for i in reversed(a):
		r[0], r[1] = r[1], r[0]
		r[0] += r[1]*i
		g = gcd(r[0],r[1])
		r[0] //= g
		r[1] //= g
	print('YES'if pq == r else 'NO')
s()