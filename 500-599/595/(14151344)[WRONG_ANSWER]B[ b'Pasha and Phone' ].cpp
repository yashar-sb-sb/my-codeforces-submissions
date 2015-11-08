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
#include<set>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100000],B[100000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,k,res=1,l;
	cin>>n>>k;
	l = 1;
	for(int i = 0; i < k; ++i)l *= 10;
	for(int i = 0; i < n/k; ++i)cin>>A[i];
	for(int i = 0; i < n/k; ++i)cin>>B[i];
	
	for(int i = 0; i < n/k; ++i)
	{
		int a = (l-1)/A[i];
		a -= (l/10*(1+B[i])-1)/A[i];
		a += (l/10*B[i]-1)/A[i]+(B[i]!=0);
		res = res * a % (int)(1e9+7);
	}
	cout<<res;
	return 0;
}
