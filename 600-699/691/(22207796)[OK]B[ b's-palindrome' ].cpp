#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

char A['z'+1];

int main()
{
ios_base::sync_with_stdio(0);
	string s;
	A['A'] = 'A';
	A['b'] = 'd';
	A['d'] = 'b';
	A['H'] = 'H';
	A['I'] = 'I';
	A['M'] = 'M';
	A['O'] = 'O';
	A['o'] = 'o';
	A['T'] = 'T';
	A['U'] = 'U';
	A['V'] = 'V';
	A['v'] = 'v';
	A['W'] = 'W';
	A['w'] = 'w';
	A['X'] = 'X';
	A['x'] = 'x';
	A['p'] = 'q';
	A['q'] = 'p';
	A['Y'] = 'Y';
	cin>>s;
	for(int i = 0; i < (s.size()+1)/2; ++i)
	{
		if(s[i] != A[s[s.size()-1-i]])return cout<<"NIE",0;
	}
	cout<<"TAK";
	return 0;
}