def s():
	a = input()
	if a[0] == '@' or a[-1] == '@':
		return False
	a = a.split('@')
	if len(a) == 2:
		print(*a,sep='@')
		return True
	if min(list(len(i) for i in a[1:-1]))<2:
		return False
	print(a[0],end='')
	for i in a[1:-1]:
		print('@',i[0],',',i[1:],sep='',end='')
	print('@',a[-1],sep='')
	return True
print(''if s() else 'No solution')