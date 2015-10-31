s = input()
s = s.split(' ')
t = int(s[0])
a = int(s[1])
b = int(s[2])

def gcd(a,b):
	if(b==0):return a
	if(a<b):a,b=b,a
	return gcd(b,a%b)

g = a*b//gcd(a,b)
s = t//g*min(a,b)-1
s = s + min(t%g,a,b)
g = gcd(s,t)
print(str(s//g)+"/"+str(t//g))
