#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[int(1e5+2)];

int main()
{
ios_base::sync_with_stdio(0);
	int n,inp;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		++A[inp];
	}
	int z = 1,nz=1;
	while(true)
	{
		while(nz<=n && !A[nz])++nz;
		if(!A[z])
			if(A[nz])
				--A[nz],++A[z];
			else
				return cout<<z<<endl,0;
		++z;
		if(nz<z)nz = z;
	}
	return 0;
}
