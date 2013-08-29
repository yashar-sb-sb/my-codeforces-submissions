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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int A[4]={},i;
	char c;
	while(cin>>i>>c)
	{
		++A[i];
	}
	++A[i];
	i=0;
	while(!A[++i]);
	cout<<i;
	--A[i];
	while(A[i]||++i)
	{
		--A[i];
		cout<<'+'<<i;
	}
	return 0;
}