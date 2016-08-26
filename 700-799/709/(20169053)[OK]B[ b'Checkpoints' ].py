def s():
	[n,a] = list(map(int,input().split()))
	x = list(map(int,input().split()))
	x.sort()
	if n == 1:
		print(0)
		return
	print(min(x[-1]-x[1]+min(abs(x[-1]-a),abs(x[1]-a)),x[-2]-x[0]+min(abs(x[-2]-a),abs(x[0]-a))))
s()