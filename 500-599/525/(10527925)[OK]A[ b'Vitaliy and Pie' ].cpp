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

int A[26];

int main()
{
ios_base::sync_with_stdio(0);
	int n,co=0;
	char c;
	cin>>n;
	while(--n)
	{
		cin>>c;
		++A[c-'a'];
		cin>>c;
		if(--A[c-'A']<0)A[c-'A']=0,++co;
	}
	cout<<co;
	return 0;
}
