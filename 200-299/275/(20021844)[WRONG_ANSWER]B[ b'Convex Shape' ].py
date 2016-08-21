def s():
	[n,m] = list(map(int,input().split()))
	a = [input() for _ in range(n)]
	t = [[[0]*m for _ in range(n)]]
	def dfs(r,c):
		if r < 0 or r >= n or c < 0 or c >= m or a[r][c] == 'W' or t[0][r][c]:
			return
		t[0][r][c] = 1
		dfs(r-1,c)
		dfs(r+1,c)
		dfs(r,c-1)
		dfs(r,c+1)
	for i in range(n):
		for j in range(m):
			if a[i][j] == 'B':
				dfs(i,j)
				break
		else:
			continue
		break
	if sum(map(sum,t[0])) != sum([1 for i in a for j in i if j == 'B']):
		return False
	for i in range(n):
		b, w = False, False
		for j in range(m):
			if a[i][j] == 'B':
				b = True
			if b and a[i][j] == 'W':
				w = True
			if w and a[i][j] == 'B':
				return False
	for j in range(m):
		b, w = False, False
		for i in range(n):
			if a[i][j] == 'B':
				b = True
			if b and a[i][j] == 'W':
				w = True
			if w and a[i][j] == 'B':
				return False
	return True
print('YES' if s() else 'NO')