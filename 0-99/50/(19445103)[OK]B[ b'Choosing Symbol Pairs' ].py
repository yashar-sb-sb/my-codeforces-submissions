def f(x=input()):
	d = dict()
	for i in x:
		if i in d: d[i]+=1
		else: d[i] = 1
	return sum([j*j for _,j in d.items()])
print(f())