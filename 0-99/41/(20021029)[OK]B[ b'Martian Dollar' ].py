def s():
	[n,b] = list(map(int,input().split()))
	a = list(map(int,input().split()))
	ma = [1,1]
	mi = a[0]
	r = b
	for i in a:
		mi = min(i,mi)
		r = max(r,b%mi + b//mi*i)
	print(r)
s()