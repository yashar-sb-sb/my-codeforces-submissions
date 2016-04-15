def s():
	[n,l,r,x] = list(map(int,input().split(' ')))
	l -= 1
	r += 1
	a = list(map(int,input().split(' ')))
	def f(i=0,s=0,mi=10**6,ma=1):
		if i == n:
			return ma - mi >= x and l < s < r
		
		return f(i+1, s+a[i], min(mi,a[i]), max(ma,a[i]))+f(i+1,s,mi,ma)
	print(f())
s()