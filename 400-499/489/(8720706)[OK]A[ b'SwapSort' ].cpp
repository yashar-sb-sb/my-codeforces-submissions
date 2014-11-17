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

int A[3000];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	cout<<n<<'\n';
	for(int i = 0; i < n; ++i)
	{
		int m = i;
		for(int j = i; j < n; ++j)if(A[m]>A[j])m=j;
		swap(A[i],A[m]);
		cout<<i<<' '<<m<<'\n';
	}
	return 0;
}