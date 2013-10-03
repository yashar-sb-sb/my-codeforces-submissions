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

int A[30];

int main()
{
ios_base::sync_with_stdio(0);
	int n,k,i,j,inp;
	cin>>n>>k;
	bitset<901> B;
	fill(A,A+k,0);
	for(i = 0; i < k; ++i)
	{
		cin>>inp;
		A[i]=inp;
		B.set(inp);
	}
	inp = 1;
	for(i = 0; i < k; ++i)
	{
		cout<<A[i];
		for(j = 1; j < n; ++j)
		{
			while(B.test(inp))++inp;
			cout<<' '<<inp++;
		}
		cout<<'\n';
	}
	return 0;
}