def s():
	[n,vb,vs]=list(map(int,input().split()))
	a = list(map(int,input().split()))
	uni = list(map(int,input().split()))
	def dis(x,y):
		import math
		return math.sqrt(abs(x-uni[0])**2+abs(y-uni[1])**2)
	enu = enumerate(a)
	next(enu)
	print(min([(i[1]/vb+dis(i[1],0)/vs,dis(i[1],0),i[0]+1) for i in enu])[2])
s()