def s():
	[a,b] = input().split()
	m = int(max(max(a),max(b)))+1
	a = int(a)
	b = int(b)
	c = 0
	r = 0
	while a or b or c:
		r += 1
		c = (a%10+b%10+c)//m
		a//=10
		b//=10
	print(r)
s()