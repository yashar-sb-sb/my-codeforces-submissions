def f():
	n = int(input())
	a = 'ABSINTH, BEER, BRANDY, CHAMPAGNE, GIN, RUM, SAKE, TEQUILA, VODKA, WHISKEY, WINE'.replace(',','').split()
	res = 0
	for _ in range(n):
		i = input()
		res += int(i.isdigit() and int(i)<18 or i in a)
	print(res)
f()