def s():
	[n,m] = list(map(int,input().split()))
	a = [input() for _ in range(n)]
	se = set()
	for i in range(n):
		for j in range(m):
			ui = i
			while ui < n and a[ui][j] == 'B':
				ui += 1
			li = i
			while li > -1 and a[li][j] == 'B':
				li -= 1
			li += 1
			uj = j
			while uj < m and a[i][uj] == 'B':
				uj += 1
			lj = j
			while lj > -1 and a[i][lj] == 'B':
				lj -= 1
			lj += 1
			for ii in range(li,ui):
				for jj in range(lj,uj):
					t = sorted([(ii,j),(i,jj)])
					se.add((t[0],t[1]))
	su = sum([1 for i in a for j in i if j == 'B'])
	su = su*(su-1)/2+su
	print('YES' if len(se) == su else 'NO')

s()