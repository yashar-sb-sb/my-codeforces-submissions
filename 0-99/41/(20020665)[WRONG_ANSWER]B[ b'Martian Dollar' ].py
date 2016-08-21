def s():
	[n,b] = list(map(int,input().split()))
	a = list(map(int,input().split()))
	i = 0
	while i < len(a):
		mi = i
		for j in range(i,len(a)):
			if a[mi]>a[j]:
				mi = j
			if a[mi] < a[j]:
				i = j
				b = b%a[mi] + b//a[mi]*a[j]
				break
		else:
			i+=1
	print(b)
s()