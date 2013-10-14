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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[3][3];

int main()
{
ios_base::sync_with_stdio(0);
	for(int i = 0; i < 3; ++i)
		for(int j = 0; j < 3; ++j)
			cin>>A[i][j];
	A[0][0] = (A[2][1]+A[1][2])/2;
	A[2][2] = (A[0][1]+A[1][0])/2;
	A[1][1] = A[0][1]+A[0][2]-A[2][2];
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
			cout<<A[i][j]<<' ';
		cout<<'\n';
	}
	return 0;
}