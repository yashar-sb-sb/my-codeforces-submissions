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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,ans=0,A[5000];
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	sort(A,A+n);
	if(A[0]>n)++ans;
	for(int i = 1; i < n; ++i)
	{
		if(A[i]==A[i-1]||A[i]>n)++ans;
	}
	cout<<ans;
	return 0;
}