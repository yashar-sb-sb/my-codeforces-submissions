def s():
	import re,itertools
	pattern = re.compile('[^a-z]+')
	def st(x):
		return pattern.sub('',x.lower())
	s = set([''.join(i)for i in itertools.permutations([st(input())for _ in range(3)])])
	for i in range(int(input())):
		print('ACC'if st(input()) in s else 'WA')
s()