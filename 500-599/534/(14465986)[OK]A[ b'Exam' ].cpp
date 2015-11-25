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
#include<cstdio>
#include<list>
#include<set>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[5000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,c=1;
	cin>>n;
	if(n<4)
	{
		if(n < 3)cout<<"1\n1";
		else if(n == 3)cout<<"2\n1 3";
		return 0;
	}
	for(int i = 0; i < n; i+=2)A[i]=c++;
	for(int i = 1; i < n; i+=2)A[i]=c++;
	for(c = 1; c < n && abs(A[c]-A[c-1])>1; ++c);
	c = c%n;
	cout<<n<<'\n';
	for(int i = c; i < n; ++i)cout<<A[i]<<' ';
	for(int i = 0; i < c; ++i)cout<<A[i]<<' ';
	return 0;
}
