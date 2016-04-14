import functools
def f():
	input()
	print(functools.reduce(lambda x, y: x*y,map(lambda x:len(x)+1,input().replace(' ','').strip('0').split('1'))))
f()