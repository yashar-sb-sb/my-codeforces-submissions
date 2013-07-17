#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	int n,s=0,ms=0,l,r;
	cin>>n;
	vector<int>vv(n),v(n);
	for(int i = 0; i < n; ++i)
	{
		cin>>vv[i];
		v[i] = vv[i]<0?0:vv[i];
	}
	l=0;
	r=n;
	for(int i = 0; i < n; ++i)
	{
		s=v[i];
		for(int j = i+1; j < n; ++j)
		{
			s+=v[j];
			if(v[i]==v[j]&&s>ms)
			{
				ms=s;
				l=i;
				r=j+1;
			}
		}
	}
	cout<<ms<<' ';
	s=0;
	for(int i = l; i < r; ++i)
	{
		if(vv[i]<0)++s;
	}
	ms = s+l-r+n;
	if(n-ms>1)
	{
		cout<<ms<<'\n';
		for(int i = 0; i < l; ++i)
		{
			cout<<i+1<<' ';
		}
		for(int i = l; i < r; ++i)
		{
			if(vv[i]<0)cout<<i+1<<' ';
		}
		for(int i = r; i < n; ++i)
		{
			cout<<i+1<<' ';
		}
	}
	else
	{
		s=0;
		for(int i = 0; i < n; ++i)
		{
			if(vv[i]<0)++s;
		}
		if(n-s>1)
		{
			cout<<s<<'\n';
			for(int i = 0; i < r; ++i)
			{
				if(vv[i]<0)cout<<i+1<<' ';
			}
		}
		else
		{
			int m1=0,m2=0;
			for(int i = 0; i < n; ++i)
			{
				if(vv[i]<vv[m1])
				{
					m2 = m1;
					m1 = i;
				}
				else if(vv[i]<vv[m2])
				{
					m2 = i;
				}
			}
			cout<<"2\n";
			if(m1>m2)swap(m1,m2);
			cout<<m1+1<<' '<<m2+1;
		}
	}
	return 0;
}