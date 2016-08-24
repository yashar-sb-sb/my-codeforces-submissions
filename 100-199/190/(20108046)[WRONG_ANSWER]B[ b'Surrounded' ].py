a = list(map(int,input().split()))
b = list(map(int,input().split()))
import math
print((math.sqrt(abs(a[0]-b[0])**2+abs(a[1]-b[1])**2)-a[2]-b[2])/2)