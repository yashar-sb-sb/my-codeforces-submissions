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

int A[3000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m;
	cin>>n;
	cin>>m;
	int i = m;
	while(i--)cin>>A[i];
	sort(A,A+m);
	if(A[0]==1||A[m-1]==n){cout<<"NO";return 0;}
	int j = 0;
	--m;
	for(i = 1; i < m; ++i)
	{
		if(A[i-1] == A[i] - 1 && A[i] + 1 == A[i+1]){cout<<"NO";return 0;}
	}
	cout<<"YES";
	return 0;
}