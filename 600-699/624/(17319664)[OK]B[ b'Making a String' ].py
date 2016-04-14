def f():
	input()
	a = list(map(int,input().split(' ')))
	a.sort()
	t = 10**9+1
	r = 0
	for i in reversed(a):
		t = i if i < t else t - 1
		if t == 0:
			break
		r += t
	print(r)
f()