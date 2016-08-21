def s():
	[n,m] = list(map(int,input().split()))
	a = [input() for _ in range(n)]
	se = set()
	for i in range(n):
		for j in range(m):
			if a[i][j] == 'W':
				continue
			for ii in range(n):
				for jj in range(m):
					if a[ii][jj] == 'W':
						continue
					sti = 1 if i < ii else -1
					stj = 1 if j < jj else -1
					for k in range(i,ii,sti):
						if a[k][j] == 'W':
							break
					else:
						for k in range(j,jj,stj):
							if a[ii][k] == 'W':
								break
						else:
							continue
					for k in range(j,jj,stj):
						if a[i][k] == 'W':
							break
					else:
						for k in range(i,ii,sti):
							if a[k][jj] == 'W':
								break
						else:
							continue
					return False
	return True
print('YES' if s() else 'NO')