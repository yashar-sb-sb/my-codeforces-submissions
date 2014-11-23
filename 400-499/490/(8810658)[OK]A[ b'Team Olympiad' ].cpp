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

int A[5000],B[5000],C[5000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,a=0,b=0,c=0,inp;
	cin>>n;
	for(int i = 1; i <= n; ++i)
	{
		cin>>inp;
		if(inp == 1)A[a++]=i;
		else if(inp == 2)B[b++]=i;
		else C[c++]=i;
	}
	a = min(a,min(b,c));
	cout<<a;
	for(int i = 0; i < a; ++i)cout<<'\n'<<' '<<A[i]<<' '<<B[i]<<' '<<C[i];
	return 0;
}
