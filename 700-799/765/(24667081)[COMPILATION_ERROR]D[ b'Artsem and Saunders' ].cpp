#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n;
int F[100001];
int G[100001];
int H[100001];

int D[100001];
set<int> E;

bool ff = false;

void f(int ind)
{
	if(ff)return;
	if(ind == n+1)
	{
		int i;
		for(i = 1; i <= n+1; ++i)
		{
			if(ff&&H[i])
			{
				ff = false;
				break;
			}
			if(!H[i])ff = true;
		}
		if(ff)
		{
		for(i = 1; i <= n + 1; ++i)
			if(!H[i])break;
		cout<<i-1<<'\n';
		for(int j = 1; j <= n; ++j)
			cout<<G[j]<<' ';cout<<'\n';
		for(int j = 1; j < i; ++j)
			cout<<H[j]<<' ';cout<<'\n';
			}
		return;
	}
	if(G[ind])
	{
		if(F[ind] == H[G[ind]])
		{
			if(G[H[G[ind]]]==0)
				G[H[G[ind]]] = G[ind];
		}
		if(F[ind] == H[G[ind]] && G[ind] == G[H[G[ind]]])
		{
			f(ind+1);
		}
		return;
	}
	
	if(D[F[ind]])
	{
		G[ind] = D[F[ind]];
		f(ind);
		G[ind] = 0;
	}
	else
	for(auto it = E.begin(); !ff && it != E.end();)
	{
		int i = *it;
		++it;
		H[i] = F[ind];
		D[F[ind]] = i;
		G[ind] = i;
		E.erase(i);
		f(ind);
		E.insert(i);
		H[i] = 0;
		G[ind] = 0;
	}
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    for(int i = 1; i <= n; ++i)
    	cin>>F[i];
    for(int i = 1; i <= n; ++i)
    {
    	E.insert(i);
    }
    f(1);
    if(!ff)cout<<-1;
   	return 0;
}
close