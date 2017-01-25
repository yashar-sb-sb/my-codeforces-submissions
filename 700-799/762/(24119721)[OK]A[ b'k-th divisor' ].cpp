#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,int> pii;

vector<pii> divs;
vector<LL> ans;
LL l = 1;

void f(int c = 0)
{
	if(c==divs.size())
	{
		ans.push_back(l);
		return;
	}
	LL save = l;
	for(int i = 0; i <= divs[c].second; ++i)
	{
		f(c+1);
		l *= divs[c].first;
	}
	l = save;
}

int main()
{
	ios_base::sync_with_stdio(0);
	LL n,k;
	cin>>n>>k;
	for(LL i = 2; i*i <= n; ++i)
	{
		int c = 0;
		while(n%i==0)
		{
			++c;
			n/=i;
		}
		if(c)divs.push_back(pii(i,c));
	}
	if(n>1)divs.push_back(pii(n,1));
	f();
	if(k>ans.size())return cout<<-1,0;
	sort(ans.begin(), ans.end());
	cout<<ans[k-1];
	return 0;
}