#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	char s[101];
	cin>>s;
	int l=0,u=0;
	int i = 0;
	while(s[i])
	{
		if(s[i++]>'Z')
		{
			++l;
		}
		else
		{
			++u;
		}
	}
	i = 0;
	if(u>l)
	{
		int d = 'A'-'a';
		while(s[i])
		{
			if(s[i]>'Z')
			{
				s[i]+=d;
			}
			++i;
		}
	}
	else
	{
		int d = 'a'-'A';
		while(s[i])
		{
			if(s[i]<'a')
			{
				s[i]+=d;
			}
			++i;
		}
	}
	cout<<s;
	return 0;
}