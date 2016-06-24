#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,k;
	cin>>n>>k;
	if(n==k)return cout<<"-1\n",0;
	int i = 0;
	k = n-k;
	for(; i < k; ++i)cout<<(i+1)%k+1<<' ';
	for(++i; i <= n; ++i)cout<<i<<' ';cout<<endl;
	return 0;
}
