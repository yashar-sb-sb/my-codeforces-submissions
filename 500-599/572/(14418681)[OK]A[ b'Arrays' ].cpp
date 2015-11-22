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

int A[100000], B[100000];

int main()
{
ios_base::sync_with_stdio(0);
	int na,nb,a,b;
	cin>>na>>nb>>a>>b;
	for(int i = 0; i < na; ++i)
	{
		cin>>A[i];
	}
	for(int i = 0; i < nb; ++i)
	{
		cin>>B[i];
	}
	sort(A,A+na);
	sort(B,B+nb);
	cout<<(A[a-1]< B[nb-b]?"YES":"NO");
	return 0;
}
