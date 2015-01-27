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
#include<cstdio>
#include<list>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	string s;
	cin>>s;
	int l = s.size(),i,j;
	for(i = 0; i < l && ((s[i]-'0')&1); ++i);
	for(j = i; j < l; ++j)
	{
		if(((s[j]-'0')&1) == 0)
		{
			i = j;
			if(s[i] < s[l-1])
			{
				swap(s[i],s[l-1]);
				cout<<s;
				return 0;
			}
		}
	}
	if(i < l)
	{
		swap(s[i],s[l-1]);
		cout<<s;
	}
	else cout<<-1;
	return 0;
}
