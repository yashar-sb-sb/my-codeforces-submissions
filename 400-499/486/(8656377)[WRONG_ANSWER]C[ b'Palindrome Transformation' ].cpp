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

char A[100000];
int B[100000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,p,m=0,d1=-1,d2=0;
	cin>>n>>p;
	--p;
	for(int i = 0; i < n; ++i)cin>>A[i];
	for(int i = 0; i < n/2; ++i)
	{
		if(A[i] != A[n-i-1])d2=i;
		if(d1==-1 && A[i] != A[n-i-1])d1=i;
		m+=min(abs(A[i] - A[n-i-1]),26-abs(A[i] - A[n-i-1]));
	}
	if(m==0)cout<<m;
	else if(p>n/2)p = n-p-1;
	if(p<d1)cout<<m+d1-p;
	else if(p>d2)cout<<m+p-d2;
	else cout<<m+d2-d1+min(p-d1,d2-p);
	return 0;
}