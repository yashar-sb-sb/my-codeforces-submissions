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

bool A[101]={};

int main()
{
ios_base::sync_with_stdio(0);
	int n,t,l;
	cin>>n>>l;
	for(int i = 0; i < l; ++i)
	{
		cin>>t;
		if(!A[t])--n;
		A[t] = true;
	}
	cin>>l;
	for(int i = 0; i < l; ++i)
	{
		cin>>t;
		if(!A[t])--n;
		A[t] = true;
	}
	if(n) cout<<"Oh, my keyboard!";
	else cout<<"I become the guy.";
	return 0;
}