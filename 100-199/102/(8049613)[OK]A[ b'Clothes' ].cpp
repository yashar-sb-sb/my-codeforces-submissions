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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool comp(pii i, pii j)
{
	return i.first < j.first || i.first == j.first && i.second < j.second;
}

bool (*cp) (pii, pii) = comp;
map<pii,bool,bool (*) (pii,pii)> ma(cp);
int A[101];

int main()
{
ios_base::sync_with_stdio(0);
	int n, m, res=-1;
	pii t;
	cin>>n>>m;
	for(int i = 1; i <= n; ++i)
	{
		cin>>A[i];
	}
	for(int i = 0; i < m; ++i)
	{
		cin>>t.first>>t.second;
		if(t.first>t.second)swap(t.first, t.second);
		ma[t]=true;
	}
	bool f;
	for(int i = 1; i < n; ++i)
	{
		for(int j = i+1; j < n; ++j)
		{
			for(int k = j+1; k <= n; ++k)
			{
				t.first = i;
				t.second = j;
				f = ma[t];
				t.second = k;
				f &= ma[t];
				t.first = j;
				if(f && ma[t])
				{
					if(res == -1)res = A[i]+A[j]+A[k];
					else if(res>A[i]+A[j]+A[k])res = A[i]+A[j]+A[k];
				}
			}
		}
	}
	cout<<res;
	return 0;
}