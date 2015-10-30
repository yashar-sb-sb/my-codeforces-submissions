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

int A[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,cm=0,em=0,cc=0,inp;
	cin>>n>>m;
	for(int i = 0; i < m; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			cin>>inp;
			if(inp>cc)cc=inp, cm=j;
		}
		++A[cm];
		if(A[cm] == A[em])em=min(em,cm);
		else if(A[cm]>A[em])em=cm;
		cm = cc = 0;
	}
	cout<<em+1;
	return 0;
}
