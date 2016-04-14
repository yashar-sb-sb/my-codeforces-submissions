import functools
def f():
	input()
	a = input().replace(' ','').strip('0')
	print(functools.reduce(lambda x, y: x*y,map(lambda x:len(x)+1,a.split('1')))if len(a) else 0)
f()