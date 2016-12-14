#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

vector<LL> T[200001];
bool F[200001];
LL P[200001];
bool found = false;
LL ans;

pii find(int n)
{
	F[n] = true;
	if(n>1 && T[n].size()==1)
	{
		return pii(P[n],P[n]);
	}
	bool start = false;
	pii res;
	LL ma;
	for(auto i:T[n])
	{
		if(!F[i])
		{
			if(!start)
			{
				res = find(i);
				start = true;
				ma = res.second;
			}
			else
			{
				auto tmp = find(i);
				if(!found)
				{
					found = true;
					ans = tmp.second + ma;
				}
				ans = max(ans,tmp.second+ma);
				ma = max(ma,tmp.second);
				res.second = max(res.second,tmp.second);
				res.first += tmp.first;
			}
		}
	}
	res.first += P[n];
	res.second = max(res.second,res.first);
	return res;
}

int main()
{
	int n;
	cin>>n;
	for(int i = 1; i <= n; ++i)cin>>P[i];
	for(int i = 1; i < n; ++i)
	{
		int a, b;
		cin>>a>>b;
		T[a].push_back(b);
		T[b].push_back(a);
	}
	find(1);
	if(found)cout<<ans<<endl;
	else cout<<"Impossible"<<endl;
	return 0;
}