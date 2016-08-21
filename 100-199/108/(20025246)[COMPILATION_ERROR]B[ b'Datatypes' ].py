ef s():
	input()
	a = list(map(int,input().split()))
	a.sort()
	for i in range(1,len(a)):
		if a[i]<a[i-1]*2:
			return 'YES'
	return 'NO'
print(s())