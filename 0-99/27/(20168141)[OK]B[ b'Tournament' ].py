def s():
	n = int(input())
	a = [0]*(n+1)
	b = [0]*(n+1)
	r = []
	for _ in range(n*(n-1)//2-1):
		c = list(map(int,input().split()))
		a[c[0]] += 1
		b[c[1]] += 1
	for i in range(1,n+1):
		if a[i] + b[i] == n-2:
			r.append(i)
	r.sort(key = lambda x:-a[x])
	print(*r)
s()