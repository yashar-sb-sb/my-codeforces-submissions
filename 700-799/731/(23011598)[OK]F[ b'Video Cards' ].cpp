#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

#define get(i) min(i,sz)


LL A[200001], S[200001];

int main()
{
	LL n,a,sz = 0;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>a;
		++A[a];
		sz = max(sz,a);
	}
	LL ma=0;
	for(int i = 1; i <= sz; ++i)S[i]=S[i-1]+A[i];
	for(LL i = 1; i <= sz; ++i)
	{
		if(A[i])
		{
			LL cur = 0;
			for(LL j = i; j <= sz; j+=i)cur += (S[get(j+i-1)]-S[j-1])*j;
			ma = max(cur,ma);
		}
	}
	cout<<ma<<endl;
	return 0;
}