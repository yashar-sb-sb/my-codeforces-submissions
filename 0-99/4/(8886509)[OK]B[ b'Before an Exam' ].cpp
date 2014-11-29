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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[30],B[30];

int main()
{
ios_base::sync_with_stdio(0);
	int d,s,ma=0,mi=0;
	cin>>d>>s;
	for(int i = 0; i < d; ++i)
	{
		cin>>A[i]>>B[i];
		mi+=A[i];
		ma+=B[i];
	}
	if(s>=mi && s<=ma)
	{
		s-=mi;
		cout<<"YES\n";
		for(int i = 0; i < d; ++i)
		{
			cout<<A[i]+min(B[i]-A[i],s)<<' ';
			s-=min(B[i]-A[i],s);
		}
	}
	else cout<<"NO";
	return 0;
}
