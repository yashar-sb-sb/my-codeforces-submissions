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

vector<int> A[100];
int L[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,k,mi,ma;
	cin>>n>>k;
	for(int i = 0; i < n; ++i)cin>>L[i];
	mi = ma = L[0];
	for(int i = 0; i < n; ++i)
	{
		mi = min(mi,L[i]);
		ma = max(ma,L[i]);
	}
	if(mi+k<ma)
	{
		cout<<"NO";
		return 0;
	}
	for(int i = 0; i < ma; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			if(A[j].size()<L[j])A[j].push_back(i%k+1);
		}
	}
	cout<<"YES\n";
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < L[i]; ++j)cout<<A[i][j]<<' ';cout<<'\n';
	}
	return 0;
}
