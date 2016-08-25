def s():
	a = [[ord(i)-48 if ord(i) < 60 else ord(i)-55 for i in i]for i in input().split(':')]
	r = [i for i in range(max(max(a[0]),max(a[1]))+1,61) if sum(list(i**l[0]*l[1] for l in enumerate(reversed(a[0]))))<24 and sum(list(i**l[0]*l[1] for l in enumerate(reversed(a[1]))))<60]
	if len(r) == 0:
		print(0)
	elif r[-1] == 60:
		print(-1)
	else:
		print(*r)
s()