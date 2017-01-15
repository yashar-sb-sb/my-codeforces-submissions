#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> T[10001];
int vis[10001];
void f(int v)
{
	if(vis[v])return;
	vis[v] = true;
	for(auto i:T[v])if(!vis[i])f(i);
}

int main()
{
	ios_base::sync_with_stdio(0);
	int n,inp;
	cin>>n;
	for(int i = 1; i<= n; ++i)
	{
		cin>>inp;
		T[inp].push_back(i);
		T[i].push_back(inp);
	}
	int ans = 0;
	for(int i = 1; i <= n; ++i)
	{
		if(!vis[i])++ans,f(i);
	}
	cout<<ans<<endl;
	return 0;
}