#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL n, k, sum=0;
int A[1000000];
LL B[10000001];
LL count(int mi, int cu)
{
	if(B[cu]>LL(-1))return B[cu];
	if(cu<2*mi)return B[cu] = cu>=mi;
	//cout<<mi<<' '<<cu<<endl;
	return B[cu] = count(mi,cu/2)+count(mi,cu/2+(cu&1));
}
bool calc(int m)
{
	memset(B,-1,sizeof(B));
	//cout<<m<<endl;
	sum = 0;
	for(int i = 0; i < n; ++i)
	{
		sum += count(m,A[i]);
	}
	//cout<<':'<<sum<<endl;
	return (sum>=LL(k));
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin>>n>>k;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	int l = 0, r = 1e7+1;
	while(l+1<r)
	{
		int m = (l+r)/2;
		if(calc(m))l = m;
		else r = m;
	}
	if(l)cout<<l<<endl;
	else cout<<-1<<endl;
	return 0;
}