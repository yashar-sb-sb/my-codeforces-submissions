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

int A[100];

int main()
{
ios_base::sync_with_stdio(0);
	int m,s,t;
	cin>>m>>s;
	if((m!=1 && s==0)||(9*m<s)){cout<<"-1 -1";return 0;}
	t = s-1;
	for(int i = 0; i < m; ++i)
	{
		A[i]+=min(9,t);
		t-=A[i];
	}
	++A[m-1];
	for(int i = m-1; i >= 0; --i)cout<<A[i];
	cout<<' ';
	t = s;
	for(int i = 0; i < m; ++i)
	{
		A[i]=min(9,t);
		t-=A[i];
	}
	for(int i = 0; i < m; ++i)cout<<A[i];
	return 0;
}