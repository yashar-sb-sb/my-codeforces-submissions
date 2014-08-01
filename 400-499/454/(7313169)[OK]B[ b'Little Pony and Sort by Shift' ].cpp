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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m=0,c=0;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	for(int i = 0; i<n-1; ++i)
	{
		if(A[i]>A[(i+1)%n])
		{
			m=i;
			++c;
		}
	}
	if(c==0)cout<<0;
	else if(c==1&&A[n-1]<=A[0])cout<<n-m-1;
	else cout<<-1;
	return 0;
}