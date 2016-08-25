def s():
	d = dict()
	d['A'] = d['B'] = d['C'] = 0
	i = input()
	if i[1] == '>':
		d[i[0]] += 1
	else:
		d[i[2]] += 1
	i = input()
	if i[1] == '>':
		d[i[0]] += 1
	else:
		d[i[2]] += 1
	i = input()
	if i[1] == '>':
		d[i[0]] += 1
	else:
		d[i[2]] += 1
	r = [(i,j) for j,i in d.items()]
	r.sort()
	if r[0][0] == r[1][0] or r[1][0] == r[2][0]:
		print('Impossible')
	else:
		print(*list(i[1]for i in r),sep = '')
s()