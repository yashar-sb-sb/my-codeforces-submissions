def s():
	[n,k] = list(map(int,input().split()))
	c = list(map(int,input().split()))
	su = c[0]*c[-1]
	cap = [False]*n
	p = sum(c)
	for i in range(1,n):
		su += c[i]*c[i-1]
	for i in list(map(int,input().split())):
		i -= 1
		p -= c[i]
		cap[i] = True
		fi = i+1 if i < n-1 else 0
		se = i-1 if i > 0 else -1
		su += c[i]*(p-(0 if cap[fi] else c[fi])-(0 if cap[se] else c[se]))
	return su
print(s())