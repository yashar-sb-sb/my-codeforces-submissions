def s():
	n = int(input())
	a = [int(input()) for _ in range(n)]
	mi = min(enumerate(a),key = lambda x:x[1])
	ma = max(enumerate(a),key = lambda x:x[1])
	p = sum(a)
	if p%n != 0:
		return 'Unrecoverable configuration.'
	if mi[1] == ma[1]:
		return 'Exemplary pages.'
	if a.count(mi[1]) > 1 or a.count(ma[1]) > 1:
		return 'Unrecoverable configuration.'
	return '{} ml. from cup #{} to cup #{}.'.format((ma[1]-mi[1])//2,mi[0]+1,ma[0]+1)
print(s())