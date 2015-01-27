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

int A[1000];

int main()
{
ios_base::sync_with_stdio(0);
	int m,t,r,w,res=0,s;
	cin>>m>>t>>r;
	if(r>t)
	{
		cout<<-1;
		return 0;
	}
	for(int i = 0; i < m; ++i)
	{
		cin>>w;
		w+=302;
		s=0;
		for(int j = w-1; j > w-t-1; --j)s+=A[j];
		for(int j = w-1; s<r; --j)
		{
			if(!A[j])
			{
				A[j] = 1;
				++s;
			}
		}
	}
	for(int i = 0; i < 1000; ++i)res+=A[i];
	cout<<res;
	return 0;
}
