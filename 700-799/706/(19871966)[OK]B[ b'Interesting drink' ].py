def s():
	n = int(input())
	import bisect
	a = list(map(int,input().split()))
	a.sort()
	m = int(input())
	for _ in range(m):
		print(bisect.bisect_right(a,int(input())))
s()