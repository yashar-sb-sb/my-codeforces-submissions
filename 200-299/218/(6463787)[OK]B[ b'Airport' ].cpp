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

int B[1001];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,j,res,re=0,i;
	cin>>n>>m;
	for(i = 0; i < m; ++i)
	{
		cin>>B[i];
	}
	sort(B,B+m,greater<int>());
	B[m]=0;
	j = m-1;
	m=n;
	while(m>0)
	{
		if(m>=B[j])
		{
			m-=B[j];
			re+=B[j]*(B[j]+1)/2;
			--j;
		}
		else
		{
			re+=m*(B[j]+B[j]-m+1)/2;
			m=0;
		}
	}
	for(i = 0, j=0, res=0; i < n; ++i)
	{
		if(B[j]==B[j+1])
		{
			res+=B[j]--;
			++j;
		}
		else
		{
			res+=B[j]--;
			j=0;
		}
	}
	cout<<res<<' '<<re;
	return 0;
}