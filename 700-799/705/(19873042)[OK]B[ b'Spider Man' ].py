def s():
	n = int(input())
	su = 1
	for i in map(int,input().split()):
		su += i-1
		print(su%2+1)
s()