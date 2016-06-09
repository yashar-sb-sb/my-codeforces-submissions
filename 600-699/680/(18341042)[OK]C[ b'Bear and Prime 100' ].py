def f():
	a = [2, 4, 3, 9, 5, 25, 7, 49, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47]
	print('\n'.join(map(str,a)))
	res = 0
	for i in a:
		res += input() == 'yes'
	print('composite' if res > 1 else 'prime')
f()