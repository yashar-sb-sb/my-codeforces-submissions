#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

LL A[200000];

int main()
{
ios_base::sync_with_stdio(0);
	LL l=0,r,inp,mid,n,sum=0;
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
		cin>>A[i];
	}
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		A[i] += inp;
		sum += A[i];
	}
	if(sum%(2*n))return cout<<-1,0;
	sum /= 2*n;
	LL nsum=0;
	for(int i = 0; i < n; ++i)
	{
		if((A[i]-sum)/n<0)return cout<<-1,0;
		nsum += (A[i] - sum)/n;
	}
	if(nsum != sum)return cout<<-1,0;
	for(int i = 0; i < n; ++i)cout<<(A[i] - sum)/n<<' ';
	return 0;
}