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

int A[101];

int main()
{
ios_base::sync_with_stdio(0);
	int n,l;
	cin>>n;
	l=n;
	for(int i = 0; i < l; ++i)
	{
		cin>>A[0];
		if(++A[*A]%2)--n;
		else ++n;
	}
	cout<<n/4;
	return 0;
}