def s():
	[n,k,t] = list(map(int,input().split()))
	a = n*t//100
	b = n*t%100*k//100
	c = n - a - 1
	print(''.join([k]*a),b,''.join([0]*c))
s()