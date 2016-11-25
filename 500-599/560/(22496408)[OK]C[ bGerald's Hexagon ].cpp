#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

int A[6];

int main()
{
ios_base::sync_with_stdio(0);
	for(int i = 0; i < 6; ++i)cin>>A[i];
	int ans = (2*A[2] + min(A[1],A[3]))*min(A[1],A[3])
	+ (2*A[2] + 2*min(A[1],A[3]))*abs(A[1]-A[3])
	+ (2*A[5] + min(A[4],A[0]))*min(A[4],A[0]);
	cout<<ans<<endl;
	return 0;
}