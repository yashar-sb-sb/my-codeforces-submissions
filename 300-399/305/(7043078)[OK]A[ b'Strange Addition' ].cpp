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

bool f(int i, int j)
{
	int I=0,J=0;
	while(j)
	{
		if(j%10)++J;
		j/=10;
	}
	while(i)
	{
		if(i%10)++I;
		i/=10;
	}
	return I<J;
}

int A[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,res=0,t1,t2,co=0;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	sort(A,A+n,f);
	for(int i = 0; i < n; )
	{
		t1 = res;
		t2 = A[i];
		while(t1)
		{
			if(t1%10&&t2%10)goto cont;
			t1/=10;
			t2/=10;
		}
		res+=A[i];
		A[co++]=A[i];
	cont:
	++i;
	}
	cout<<co<<'\n';
	while(co--)cout<<A[co]<<' ';
	return 0;
}