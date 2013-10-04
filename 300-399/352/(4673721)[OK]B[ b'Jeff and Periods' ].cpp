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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

pii A[100000];
int aa[100000][2];

bool f(pii i, pii j)
{
	return (i.first<j.first)||((i.first==j.first)&&(i.second<j.second));
}

int main()
{
ios_base::sync_with_stdio(0);
	int n, i, inp, d=0,c=0;
	cin>>n;
	for(i = 0; i < n; ++i)
	{
		cin>>inp;
		A[i].first = inp;
		A[i].second = i;
	}
	if(n==1){cout<<1<<'\n'<<A[0].first<<" 0";return 0;}
	sort(A,A+n,f);
	--n;
	for(i = 0; i < n; ++i)
	{
		if(A[i].first == A[i+1].first)
		{
			if(d)
			{
				if(d != A[i+1].second - A[i].second)
				{
					d = 0;
					while(i<n && A[i].first == A[i+1].first)++i;
				}
			}
			else
			{
				d = A[i+1].second - A[i].second;
			}
		}
		else
		{
			aa[c][0]=A[i].first;aa[c][1]=d;++c;
			d=0;
		}
	}
	if(i == n){aa[c][0]=A[i].first;aa[c][1]=d;++c;}
	cout<<c<<'\n';
	for(i = 0; i < c; ++i)
	{
		cout<<aa[i][0]<<' '<<aa[i][1]<<'\n';
	}
	return 0;
}