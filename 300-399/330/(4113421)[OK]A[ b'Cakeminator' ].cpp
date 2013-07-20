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
	LL r,c,rr=0,cc=0;
	cin>>r>>c;
	string *s = new string[r];
	for(LL i = 0; i < r; ++i)cin>>s[i];
	for(LL i = 0; i < r; ++i)
	{
		for(LL j = 0; j < c; ++j)
		{
			if(s[i][j] == 'S')
			{
				++rr;
				break;
			}
		}
	}
	for(LL i = 0; i < c; ++i)
	{
		for(LL j = 0; j < r; ++j)
		{
			if(s[j][i] == 'S')
			{
				++cc;
				break;
			}
		}
	}
	cout<<(r-rr)*c+rr*(c-cc);
	return 0;
}