def s():
	[n,m] = list(map(int,input().split()))
	a = [input() for _ in range(n)]
	b = {input() for _ in range(m)}
	res = [[]]
	aa = len(a)*[False]
	def r(x=0):
		if x == n:
			p = [a[i] for i in range(n) if aa[i]]
			if len(p) <= len(res[0]):
				return
			for i in p:
				for j in p:
					if i+' '+j in b or j+' '+i in b:
						return
			res[0] = p
			return x
		else:
			aa[x] = True
			r(x+1)
			aa[x] = False
			r(x+1)
	r()
	res = res[0]
	res.sort()
	print(len(res))
	print(*res,sep='\n')
s()