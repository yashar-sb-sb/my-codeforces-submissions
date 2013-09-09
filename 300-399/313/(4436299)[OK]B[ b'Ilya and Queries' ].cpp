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
	char s[100001];
	int i = 0,A[100001],n,l,r;
	*A=0;
	cin>>s;
	for(int i = 1; s[i]; ++i)
	{
		if(s[i] == s[i-1])
			A[i] = A[i-1]+1;
		else
			A[i] = A[i-1];
	}
	cin>>n;
	while(n--)
	{
		cin>>l>>r;
		cout<<A[r-1]-A[l-1]<<'\n';
	}
	return 0;
}