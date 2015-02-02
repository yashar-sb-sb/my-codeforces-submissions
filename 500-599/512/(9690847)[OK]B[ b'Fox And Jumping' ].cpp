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

int Gcd(int a, int b)
{
	return b?Gcd(b,a%b):a;
}

int gcd(int a, int b)
{
	return (a>b)?Gcd(a,b):Gcd(b,a);
}

map<int,int> A;
pii B[300];
int main()
{
ios_base::sync_with_stdio(0);
	int n,m=0;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>B[i].first;
	for(int i = 0; i < n; ++i)cin>>B[i].second;
	for(int i = 0; i < n; ++i)
		if(A[B[i].first] == 0 || A[B[i].first]>B[i].second)
			A[B[i].first] = B[i].second;
	bool f = true;
	while(f)
	{
		f = false;
		for(map<int,int>::iterator i = A.begin(); i!=A.end(); ++i)
		{
			for(map<int,int>::iterator j = A.begin(); j!=A.end(); ++j)
			{
				if(i==j)continue;
				int g = gcd((*i).first,(*j).first);
				if(A[g] == 0 || A[g]>(*i).second+(*j).second)
				{
					A[g] = (*i).second+(*j).second;
					f=true;
				}
			}
		}
	}
	cout<<(A[1] == 0 ? -1 : A[1]);
	return 0;
}
