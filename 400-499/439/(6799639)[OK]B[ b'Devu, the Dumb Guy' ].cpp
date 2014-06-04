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

int A[100000];

int main()
{
ios_base::sync_with_stdio(0);
	LL n,x,t;
	LL s=0;
	cin>>n>>x;
	t=n;
	while(t--)
	{
		cin>>A[t];
	}
	sort(A,A+n);
	for(int i = 0; i < n; ++i)
	{
		s+=A[i]*x;
		if(x>1)--x;
	}
	cout<<s;
	return 0;
}