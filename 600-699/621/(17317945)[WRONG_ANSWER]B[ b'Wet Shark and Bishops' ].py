def f():
	r = 0
	f = 2000*[0]
	input()
	import sys
	for i in sys.stdin.readlines():
		[a,b] = list(map(int,i.split(' ')))
		k = 1000 + a - b
		r += f[k]
		f[k] += 1
	print(2*r)
f()