def s(n,k):
	ss = dict()
	a = list(map(int,input().split()))
	res = 0
	for i in range(n):
		if a[i] in ss:
			ss[a[i]] += 1
		else:
			ss[a[i]] = 1
		if len(ss) == k:
			res = i
			break
	else:
		return (-1,-1)
	for i in range(n):
		if ss[a[i]] == 1:
			return (i+1, res+1)
		ss[a[i]] -= 1
print(*s(*map(int,input().split())))