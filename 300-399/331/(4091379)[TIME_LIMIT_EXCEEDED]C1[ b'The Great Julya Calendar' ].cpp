#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int m = 9999999;
int A[9000000];
void r(int n, int c)
{
	if(!n)
	{
		if(c<m)m=c;
		return;
	}
	if(c<A[n])
	{
		A[n]=c;
	}
	else
	{
		return;
	}
	int i,t=n;
	while(t)
	{
		i = t%10;
		if(i)r(n-i,c+1);
		t/=10;
	}
}

int main()
{
	int n;
	fill(A,A+n+9,9999999);
	cin>>n;
	r(n,0);
	cout<<m;
	return 0;
}