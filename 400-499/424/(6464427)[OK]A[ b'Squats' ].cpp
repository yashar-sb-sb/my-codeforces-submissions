#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>
#include<iomanip>
#include<bitset>
#include<string>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	string s;
	int x,X=0;
	cin>>x>>s;
	x=0;
	for(int i = 0; i < s.size(); ++i)
	{
		if(s[i]=='x')++x;
		else ++X;
	}
	if(X>x)
	{
		cout<<(X-x)/2;
		for(int i = 0; i < s.size() && x!=X; ++i)
		{
			if(s[i] == 'X')
			{
				s[i] = 'x';
				++x;
				--X;
			}
		}
	}
	else if(x>X)
	{
		cout<<(x-X)/2;
		for(int i = 0; i < s.size() && x!=X; ++i)
		{
			if(s[i] == 'x')
			{
				s[i] = 'X';
				++X;
				--x;
			}
		}
	}
	else cout<<0;
	cout<<'\n'<<s;
	return 0;
}