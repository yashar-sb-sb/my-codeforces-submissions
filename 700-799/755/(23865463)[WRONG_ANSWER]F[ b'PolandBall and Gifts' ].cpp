#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[1000001];
int vis[1000001];

int main()
{
	ios_base::sync_with_stdio(0);
	int n,k;
	vector<int>c;
	cin>>n>>k;
	for(int i = 1; i <= n; ++i)cin>>A[i];
	for(int i = 1; i <= n; ++i)
	{
		if(!vis[i])
		{
			int l = 1, j = A[i];
			vis[i] = 1;
			while(j!=i)
			{
				++l;
				vis[j] = 1;
				j = A[j];
			}
			c.push_back(l);
		}
	}
	int ma = 0;
	int kk = k;
	for(auto i:c)
	{
		int tmp = min(kk,i/2);
		ma += tmp * 2;
		kk -= tmp;
	}
	ma += kk;
	ma = min(n,ma);
	int mi=-1;
	sort(c.begin(),c.end());
	int i = 0, ss = 0, j = 0;
	for(; i < c.size(); ++i)
	{
		ss+=c[i];
		while(ss>k)ss-=c[j++];
		if(ss==k)
		{
			mi = k;
			break;
		}
	}
	if(mi==-1)mi=k+1;
	if(k==n)mi=n,ma=n;
	mi = min(n,mi);
	mi = max(0,mi);
	cout<<mi<<' '<<ma<<endl;
	return 0;
}