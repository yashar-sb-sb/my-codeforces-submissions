def s():
	n = int(input())
	a = []
	for _ in range(n):
		a.append(max(map(int,input().split(' '))))
	a[a.index(n-1)] = n
	print(*a)
s()