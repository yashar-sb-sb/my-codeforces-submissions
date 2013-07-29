#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,A[7],s=0,i;
	cin>>n;
	for(i=0; i < 7; ++i)
	{
		cin>>A[i];
		s+=A[i];
	}
	n%=s;
	if(!n)n=s;
	for(i = 0; n>0; n-=A[i++]); 
	cout<<(i-1)%7+1;
	return 0;
}