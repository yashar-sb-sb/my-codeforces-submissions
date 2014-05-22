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

int A[1000];

int main()
{
ios_base::sync_with_stdio(0);
	int t, n, m, g, s;
	char c;
	cin>>n>>m;
	t=n;
	while(t--)
	{
		for(int i = 0; i < m; ++i)
		{
			cin>>c;
			if(c=='G')g=i;
			else if(c=='S')s=i;
		}
		A[t]=s-g;
	}
	sort(A,A+n);
	if(A[0]<0){cout<<"-1";return 0;}
	s=1;
	for(int i = 1; i < n; ++i) if(A[i] != A[i-1])++s;
	cout<<s;
	return 0;
}