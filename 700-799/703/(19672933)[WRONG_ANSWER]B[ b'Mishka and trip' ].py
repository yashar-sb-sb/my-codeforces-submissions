def s():
	[n,k] = list(map(int,input().split()))
	c = list(map(int,input().split()))
	p = sum(c)
	su = c[0]*c[-1]
	for i in range(1,n):
		su += c[i]*c[i-1]
	for i in list(map(int,input().split())):
		i -= 1
		p -= c[i]
		su += c[i]*(p-c[i+1 if i < n-1 else 0]-c[i-1 if i > 0 else -1])
	return su
print(s())