#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL comp(LL*f, LL*t)
{
	vector<LL> v(f,t);
	sort(begin(v),end(v));
	return 2LL*v[2] - v[1] - v[0];
}

int main()
{
	LL A[3],ans;
	for(int i = 0; i < 3; ++i)cin>>A[i];
	
	for(int i = 0; i < 3; ++i)A[i]+=2;
	ans = comp(A,A+3);
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			for(int k = i; k < 3; ++k)--A[k];
			for(int k = 0; k < j; ++k)--A[k];
			
			ans = min(ans,comp(A,A+3));
			
			for(int k = i; k < 3; ++k)++A[k];
			for(int k = 0; k < j; ++k)++A[k];
		}
	}
	cout<<ans;
	return 0;
}