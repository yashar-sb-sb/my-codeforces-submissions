#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

LL A[200000], B[200000], C[200000], D[64];

int main()
{
ios_base::sync_with_stdio(0);
	LL l=0,r,inp,n,sum=0;
	cin>>n;
	if(n==1)
	{
		cin>>l>>r;
		if(l==r)cout<<l;
		else cout<<-1;
		return 0;
	}
	for(int i = 0; i < n; ++i)
	{
		cin>>B[i];
	}
	for(int i = 0; i < n; ++i)
	{
		cin>>C[i];
		sum += B[i]+C[i];
	}
	if(sum%(2*n))return cout<<-1,0;
	sum /= 2*n;
	LL nsum=0;
	for(int i = 0; i < n; ++i)
	{
		if((B[i]+C[i]-sum)/n<0)return cout<<-1,0;
		nsum += (B[i]+C[i] - sum)/n;
	}
	if(nsum != sum)return cout<<-1,0;
		
	for(int i = 0; i < n; ++i)A[i] = (B[i]+C[i] - sum)/n;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < 64; ++j)
		{
			D[j]+=bool(A[i]&(1LL<<j));
		}
	}
	
	for(int i = 0; i < n; ++i)
	{
		LL AND = 0, OR = 0;
		for(int j = 0; j < 64; ++j)
		{
			if(A[i]&(1LL<<j))
			{
				AND += D[j]<<j;
				OR += n<<j;
			}
			else OR += D[j]<<j;
		}
		if(B[i]!=AND || C[i]!=OR)return cout<<-1,0;
	}
	for(int i = 0; i < n; ++i)cout<<A[i]<<' ';
	return 0;
}