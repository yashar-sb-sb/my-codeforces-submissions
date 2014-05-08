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

int A[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,z=1;
	double s=0;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	sort(A,A+n);
	while(n--)
	{
		s+=z*M_PI*A[n]*A[n];
		z*=-1;
	}
	cout<<s;
	return 0;
}