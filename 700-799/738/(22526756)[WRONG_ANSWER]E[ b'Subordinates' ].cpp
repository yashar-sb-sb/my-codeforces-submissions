#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[200002];

int main()
{
ios_base::sync_with_stdio(0);
	int n,s,ans=0,i,t;
	cin>>n>>s;
	for(i = 0; i < n; ++i)cin>>A[i];
	A[n] = n;
	if(A[s-1]>0)
	{
		++ans;
		A[s-1] = 0;
	}
	sort(A,A+n);
	i = 1;
	while(A[i] == A[i-1])++i;
	t = i - 1;
	for(; i < n; ++i)
	{
		while(A[i] > A[i-1]+1)
		{
			if(!t)--n;
			else --t;
			++ans;
			++A[i-1];
		}
	}
	cout<<ans+t<<endl;
}