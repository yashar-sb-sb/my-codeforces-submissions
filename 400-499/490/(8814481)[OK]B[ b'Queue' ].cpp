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
#include<cstdio>
#include<list>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

map<int,int> m1,m2;
map<int,int>::iterator it;
int A[200000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,a,b,d;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>a>>b;
		m1[a]=b;
		m2[b]=a;
	}
	d=0;
	for(int i = 1; i < n; i+=2)
	{
		it = m1.find(d);
		//cout<<'d'<<(*it).first<<' '<<(*it).second<<'\n';
		A[i] = d = (*it).second;
		m1.erase(it);
	}
	d=0;
	for(int i = n-2; i >= 0; i-=2)
	{
		it = m2.find(d);
		//cout<<'d'<<(*it).first<<' '<<(*it).second<<'\n';
		A[i] = d = (*it).second;
		m2.erase(it);
	}
	for(it = m1.begin(); it != m1.end(); ++it)
	{
		//cout<<(*it).first<<' '<<(*it).second<<'\n';
		if((*it).first&&(*it).second&&!m2[(*it).first])
		{
			d = (*it).first;
			break;
		}
	}
	if(n&1)for(int i = 0; i < n; i+=2)
	{
		A[i] = d;
		it = m1.find(d);
		d = (*it).second;
		//m1.erase(it);
	}
	for(int i = 0; i < n; ++i)cout<<A[i]<<' ';
	return 0;
}
