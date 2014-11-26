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

pii A[50], B[50];

int main()
{
ios_base::sync_with_stdio(0);
	int p,q,l,r,s=0;
	cin>>p>>q>>l>>r;
	for(int i = 0; i < p; ++i) cin>>A[i].first>>A[i].second;
	for(int i = 0; i < q; ++i) cin>>B[i].first>>B[i].second;
	for(int i, j; l <= r; ++l)
	{
		i = j = 0;
		while(i < p && j < q)
		{
			if(min(A[i].second,B[j].second+l)-max(A[i].first,B[j].first+l) >= 0){++s;break;}
			if(A[i].second < B[j].second + l)++i;
			else ++j;
		}
	}
	cout<<s;
	return 0;
}
