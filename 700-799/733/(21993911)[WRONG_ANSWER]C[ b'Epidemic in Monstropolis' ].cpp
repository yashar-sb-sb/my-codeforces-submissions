#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;
typedef pair<int,char> pic;
int A[500],dp[500][500],dpa[500][500];

vector<pic> res;
map<pii,pii> m;

void f(int from, int to)
{
	cout<<from<<' '<<to<<endl;
	if(!dp[from][to]||from==to)return;
	f(from,dpa[from][to]-1);
	f(dpa[from][to],to);
	int rr = 0;
	for(int i = 0; i < dpa[from][to]; ++i)if(A[i])++rr;
	int l = dp[from][dpa[from][to]-1], r = dp[dpa[from][to]][to];
	if(l>r)
	{
		res.push_back(pic(rr,'R'));
		A[dpa[from][to]] = 0;
	}
	else
	{
		res.push_back(pic(rr+1,'L'));
		A[dpa[from][to]-1] = 0;
	}
}

int main()
{
ios_base::sync_with_stdio(0);
	int n,k;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i];
		dp[i][i] = A[i];
	}
	for(int i = 1; i < n; ++i)
	{
		for(int j = 0; i+j < n; ++j)
		{
			for(int l = j+1; l <= i+j; ++l)
			{
				if(dp[j][l-1] > 0 && dp[l][i+j] > 0 && dp[j][l-1] != dp[l][i+j])
				{
					dpa[j][j+i] = l;
					dp[j][j+i] = dp[j][l-1] + dp[l][i+j];
				}
			}
		}
	}
	/*
	for(int i = 0; i <10; ++i)
	{
		for(int j = 0; j < 10; ++j)
		{
			cout<<dp[i][j]<<' ';
		}
		cout<<'\n';
	}
		cout<<'\n';
		cout<<'\n';
	for(int i = 0; i <10; ++i)
	{
		for(int j = 0; j < 10; ++j)
		{
			cout<<dpa[i][j]<<' ';
		}
		cout<<'\n';
	}*/
	cin>>k;
	int sum = 0, from, c=0, inp;
	for(int i = 0; i < k; ++i)
	{
		cin>>inp;
		sum = 0;
		from = c;
		while(sum<inp && c<n)
		{
			sum+=A[c++];
		}
		if(sum != inp)
		{
			cout<<"NO\n";
			return 0;
		}
		f(from,c-1);
	}
	if(res.size() == n-k)
	{
		cout<<"YES\n";
		for(int i = 0; i < n-k; ++i)cout<<res[i].first<<' '<<res[i].second<<'\n';
	}
	else cout<<"NO\n";
	return 0;
}