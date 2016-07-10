#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<pair<int,string> > T[int(1e4+1)];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,a,t;
	string s;
	cin>>n>>m;
	for(int i = 1; i <= m; ++i)T[i].push_back(make_pair(-1,""));
	for(int i = 0; i < n; ++i)
	{
		cin>>s>>t>>a;
		T[t].push_back(make_pair(a,s));
	}
	for(int i = 1; i <= m; ++i)
	{
		sort(T[i].begin(),T[i].end(),greater<pair<int,string> >());
		if(T[i][1].first != T[i][2].first)cout<<T[i][0].second<<' '<<T[i][1].second;
		else cout<<'?';
		cout<<'\n';
	}
	return 0;
}
