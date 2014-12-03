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

int A[91], B[91], P[1000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,a,b;
	string t1,t2;
	char c,d;
	cin>>t1>>t2>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>a>>c>>b>>d;
		A[a] =100*(c=='a') + b;
		B[a] = 1 + (d == 'r');
	}
	for(int i = 1; i < 91; ++i)
	{
		if(A[i])
		{
			if(P[A[i]]<2)
			{
				P[A[i]]+=B[i];
				if(P[A[i]]>=2)cout<< (A[i]>100?t2:t1)<< ' '<<(A[i]>100?-100:0)+A[i]<<' '<<i<<'\n';
			}
		}
	}
	return 0;
}
