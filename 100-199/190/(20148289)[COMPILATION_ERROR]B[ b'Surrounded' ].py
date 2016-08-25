a = list(map(int,input().split()))
b = list(map(int,input().split()))
import math
d = abs(a[0]-b[0])**2+abs(a[1]-b[1])**2
if d >= (a[2] + b[2])**2:
	print((math.sqrt(d)-a[2]-b[2])/2)
	return
d = math.sqrt(d)
print(max(max(a[2],b[2])-d-min(a[2],b[2]),0)/2)