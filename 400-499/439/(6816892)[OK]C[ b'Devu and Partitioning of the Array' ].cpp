#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>
#include<iomanip>
#include<bitset>
#include<string>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int E[100000],O[100000];
stringstream ss;

int main()
{
ios_base::sync_with_stdio(0);
	int n,k,p,t,e=0,o=0,i;
	cin>>n>>k>>p;
	t=n;
	while(t--)
	{
		cin>>i;
		if(i&1)O[o++]=i;
		else E[e++]=i;
	}
	if((k-p)%2 != o%2)
	{
		cout<<"NO";
		return 0;
	}
	t=p;
	while(p--)
	{
		if(p||k!=t)
		{
			if(e)
			{
				ss<<"1 "<<E[--e]<<'\n';
			}
			else if(o>1)
			{
				ss<<"2 "<<O[--o]<<" ";
				ss<<O[--o]<<'\n';
			}
			else
			{
				cout<<"NO";
				return 0;
			}
		}
		else
		{
			if((o%2==0)&&e+o)
			{
				ss<<e+o<<" ";
				while(o--)
				{
					ss<<O[o]<<" ";
				}
				while(e--)
				{
					ss<<E[e]<<" ";
				}
				ss<<'\n';
			}
			else
			{
				cout<"NO";
				return 0;
			}
		}
	}
	k-=t;
	while(k--)
	{
		t = e + 1;
		if(k)ss<<e+1<<" ";
		else ss<<e+o<<" ";
		while(e)
		{
			ss<<E[--e]<<" ";
		}
		if(o)
		{
			while(!k&&o>1)ss<<O[--o]<<" ";
			ss<<O[--o]<<'\n';
		}
		else
		{
			cout<<"NO";
			return 0;
		}
	}
	if(e>0||o>0)
	{
		cout<<"NO";
		return 0;
	}
	cout<<"YES\n"<<ss.str();
	return 0;
}