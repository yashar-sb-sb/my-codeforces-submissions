#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n,m,k;

int main()
{
	ios_base::sync_with_stdio(0);
	cin>>n>>m>>k;
	--k;
	cout<<k/(m*2)+1<<' '<<k%(m*2)/2+1<<' '<<(k&1?'R':'L')<<endl;
	return 0;
}