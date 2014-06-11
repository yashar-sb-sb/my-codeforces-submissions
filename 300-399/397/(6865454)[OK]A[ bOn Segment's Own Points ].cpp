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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool A[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,l,r;
	cin>>n>>l>>r;
	while(l<r)
	{
		A[l++]=true;
	}
	while(--n)
	{
		cin>>l>>r;
		while(l<r)
		{
			A[l++]=false;
		}
	}
	n=100;
	r=0;
	while(n--)r+=A[n];
	cout<<r;
	return 0;
}