#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int F[1000001],n;

int sum(int ind)
{
	int ans = 0;
	while(ind>0)
	{
		ans += F[ind];
		ind -= ind & -ind;
	}
	return ans;
}
void add(int ind)
{
	while(ind<=n)
	{
		++F[ind];
		ind += (ind & -ind);
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	int k;
	cin>>n>>k;
	int t = n;
	k = min(k,n-k);
	int p=1, cur = 1,i=k+1;
	while(t--)
	{
		add(p);
		add(i);
		
		if(i>p)
		{
			cur += 1+sum(i-1)-sum(p);
		}
		else
		{
			cur += 1+sum(i-1) + sum(n) - sum(p);
		}
		cout<<cur<<' ';
		p = i;
		i += k;
		if(i>n)i-=n;
	}
	return 0;
}