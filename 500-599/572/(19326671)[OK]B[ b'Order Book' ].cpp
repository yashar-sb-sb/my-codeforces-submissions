#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,s,p,q;
	cin>>n>>s;
	char d;
	map<int,int> B,S;
	while(n--)
	{
		cin>>d>>p>>q;
		if(d=='B')B[p]+=q;
		else S[p]+=q;
	}
	auto si = S.rbegin();
	for(int i = (s<S.size()?S.size()-s:0); i > 0; --i)++si;
	for(; si != S.rend(); ++si)cout<<"S "<<si->first<<' '<<si->second<<'\n';
	for(auto i = B.rbegin(); s-- && i != B.rend(); ++i)cout<<"B "<<i->first<<' '<<i->second<<'\n';
	return 0;
}
