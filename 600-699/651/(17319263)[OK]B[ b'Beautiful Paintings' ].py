def f():
	input()
	a = list(map(int,input().split(' ')))
	f = 1001*[0]
	for i in a:
		f[i] += 1
	f = [i for i in f if i > 0]
	r = 0
	while len(f) > 1:
		r += len(f)-1
		f = [i - 1 for i in f if i > 1]
	print(r)
f()