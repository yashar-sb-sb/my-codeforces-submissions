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
	int n,c,r=0;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	c = n--;
	while(c)
	{
		if(A[n]!=c--)++r;
		else --n;
	}
	cout<<r<<endl;
	return 0;
}
