#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[int(1e5)];

int main()
{
ios_base::sync_with_stdio(0);
	int n,inp;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		while(inp)
		{
			A[i]+=inp&1;
			inp= inp>>1;
		}
	}
	sort(A,A+n);
	LL c=1,res=0;
	for(int i = 1; i < n; ++i)
	{
		if(A[i] == A[i-1])++c;
		else
		{
			res+=c*(c-1)/2;
			c = 1;
		}
	}
	res += c*(c-1)/2;
	cout<<res<<endl;
	return 0;
}
