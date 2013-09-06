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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int a,b,n,A[100];
	cin>>n;
	--n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	cin>>a>>b;
	--a;
	--b;
	n=0;
	while(a<b)
	{
		n+=A[a++];
	}
	cout<<n;
	return 0;
}