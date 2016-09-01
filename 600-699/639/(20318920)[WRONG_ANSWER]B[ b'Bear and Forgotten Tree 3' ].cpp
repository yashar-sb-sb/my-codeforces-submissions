#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

map<pii,int> ma;

int A[int(3e5)];
LL L[int(3e5)],R[int(3e5)];

int main()
{
ios_base::sync_with_stdio(0);
	int n,d,h;
	cin>>n>>d>>h;
	if(d>h*2 || n<d+1 || (d==1 && n>2))return cout<<-1,0;
	for(int i = 0; i < h; ++i)cout<<i+1<<' '<<i+2<<'\n';
	int next = h+2, prev = 1;
	for(int i = 0; i < d-h; ++i)
	{
		cout<<prev<<' '<<next<<'\n';
		prev = next++;
	}
	for(; next <= n; next++)cout<<2<<' '<<next<<'\n';
}