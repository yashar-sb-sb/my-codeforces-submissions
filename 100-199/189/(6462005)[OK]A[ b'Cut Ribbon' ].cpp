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

int main()
{
ios_base::sync_with_stdio(0);
	int n,b[3],A[3][4001];
	A[0][0]=0;
	A[1][0]=0;
	A[2][0]=0;
	fill(A[0]+1,A[0]+4001,-1);
	fill(A[1]+1,A[1]+4001,-1);
	fill(A[2]+1,A[2]+4001,-1);
	cin>>n>>b[0]>>b[1]>>b[2];
	for(int i = b[0]; i <= n; i+=b[0])A[0][i] = A[0][i-b[0]]+1;
	for(int j = 1; j < 3; ++j)
		for(int i = 0; i <= n; ++i)
		{
			A[j][i] = max(A[j][i],A[j-1][i]);
			if(i-b[j]>=0 && A[j][i-b[j]]>=A[j][i]&& A[j][i-b[j]]!=-1)A[j][i] = A[j][i-b[j]]+1;
		}
	cout<<A[2][n];
	return 0;
}