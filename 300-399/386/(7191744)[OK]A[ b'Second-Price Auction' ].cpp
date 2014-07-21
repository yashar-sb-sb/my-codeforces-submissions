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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,inp,ind,pr1=0,pr2=0;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		if(inp>pr1)
		{
			pr2=pr1;
			pr1=inp;
			ind=i;
		}
		else if(inp>pr2)pr2=inp;
	}
	cout<<ind+1<<' '<<pr2;
	return 0;
}