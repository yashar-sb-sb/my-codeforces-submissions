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
	int k,n,l;
	cin>>s>>k;
	l = (k+s.size())/2;
	if(k>=l)
	{
		cout<<l*2;
		return 0;
	}
	n = s.size()+k;
	for(; l > 0; --l)
	{
		for(int i = 0; i <= n-2*l; ++i)
		{
			int j;
			for(j = 0; j < l && i+j+l < s.size() && s[i+j]==s[i+j+l]; ++j);
			if(!(j < l && i+j+l < s.size()))
			{
				cout<<2*l;
				return 0;
			}
		}
	}
	cout<<0;
	return 0;
}