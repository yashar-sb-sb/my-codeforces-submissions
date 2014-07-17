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

int A[1001];
bool B[1001];

int main()
{
ios_base::sync_with_stdio(0);
	int n,a,b,s=0;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		A[b]=0;
		if(!B[a])++A[a];
		B[b]=true;
	}
	n = 1001;
	while(n--)s+=A[n];
	cout<<s;
	return 0;
}