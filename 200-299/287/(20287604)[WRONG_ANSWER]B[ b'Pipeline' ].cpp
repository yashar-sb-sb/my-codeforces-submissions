#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

map<pii,int> ma;

int main()
{
ios_base::sync_with_stdio(0);
	LL n,k,a,l;
	cin>>n>>k;
	--n;
	--k;
	if(k*(k+1)/2 < n)
	{
		cout<<-1;
		return 0;
	}
	l = k*(k+1)/2 - n;
	a = (sqrt(1.1+8*l)-1)/2;
	cout<<l<<' '<<a<<endl;
	cout<<k-a;
}