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

int A[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,i,e,c=0;
	cin>>n;
	for(i = 0; i < n; ++i)cin>>A[i];
	for(i = 0; i < n; ++i)
	{
		if(!c)
		{
			c = 1;
			e = A[i];
		}
		else if(A[i] == e)++c;
		else --c;
	}
	c = 0;
	for(int i = 0; i < n; ++i)if(A[i] == e)++c;
	cout<<(c > n/2 + n%2 && n != 1?"NO":"YES");
	return 0;
}