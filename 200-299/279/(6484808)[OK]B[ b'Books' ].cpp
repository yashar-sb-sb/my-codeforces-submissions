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

int A[100000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,t,s=0,m=0,l=0,r=0;
	cin>>n>>t;
	for(int i = 0; i < n; ++i)cin>>A[i];
	while(r<n)
	{
		while(s<=t && r <= n)
			if(r<n)s+=A[r++];
			else ++r;
		if(r-l-1>m)m=r-l-1;
		while(s>t)s-=A[l++];
	}
	cout<<m;
	return 0;
}