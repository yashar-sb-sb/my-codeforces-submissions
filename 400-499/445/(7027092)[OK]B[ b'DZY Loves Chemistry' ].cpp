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

bool A[51];
map<int,map<int,int> > ma;

LL dfs(int i,LL res)
{
	if(A[i])return 0;
	map<int,int> & m = ma[i];
	A[i]=true;
	for(map<int,int>::iterator j=m.begin(); j!=m.end(); ++j)res +=dfs((*j).first,1);
	return res;
}

int main()
{
ios_base::sync_with_stdio(0);
	LL d = 1,res=0;
	int n,m,l,r;
	cin>>n>>m;
	for(int i = 0; i < m; ++i)
	{
		cin>>l>>r;
		ma[l][r]=1;
		ma[r][l]=1;
	}
	for(int i = 1; i <= n; ++i)
	{
		res+=dfs(i,0);
	}
	cout<<(d<<res);
	return 0;
}