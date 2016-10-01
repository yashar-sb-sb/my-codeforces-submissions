def s():
	n = int(input())
	a = input()+'.'
	c = 0
	r = []
	for i in a:
		if i == 'B':
			c += 1
		elif c>0:
			r.append(c)
			c = 0
	print(len(r))
	print(*r)
s()