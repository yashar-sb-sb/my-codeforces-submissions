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
	int n,m,a,s=0,tmp=0;
	cin>>n>>m;
	while(n--)
	{
		cin>>a;
		tmp+=a;
		if(tmp==m)
		{
			++s;
			tmp=0;
		}
		else if(tmp>m)
		{
			++s;
			tmp=a;
		}
	}
	if(tmp)++s;
	cout<<s;
	return 0;
}