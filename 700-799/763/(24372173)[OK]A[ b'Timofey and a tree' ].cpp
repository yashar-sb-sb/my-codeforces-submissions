#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;
typedef pair<int,vector<int>> piv;

vector<int> T[100001];
int C[100001];
int vis[100001];

bool go(int v, int c)
{
	if(vis[v])return 1;
	if(c!=C[v])return false;
	vis[v] = true;
	for(int i:T[v])
	{
		if(!go(i,c))
			return false;
	}
	return true;
}

bool check(int v)
{
	vis[v] = 1;
	for(int i:T[v])
		if(!go(i,C[i]))
			return false;
	return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n, u, v;
    cin>>n;
    for(int i = 1; i < n; ++i)
    {
    	cin>>u>>v;
    	T[u].push_back(v);
    	T[v].push_back(u);
    }
    for(int i = 1; i <= n; ++i)cin>>C[i];
    u = v = 0;
    for(int i = 1; i <= n; ++i)
    {
    	for(int j:T[i])
    		if(C[i] != C[j])
    			u = i, v = j;
    }
    if(!u)return cout<<"YES\n1\n",0;
    if(check(v))
    {
    	cout<<"YES\n"<<v<<'\n';
    	return 0;
    }
    memset(vis,0,sizeof(vis));
    if(check(u))
    {
    	cout<<"YES\n"<<u<<'\n';
    	return 0;
    }
    cout<<"NO\n";
	return 0;
}
