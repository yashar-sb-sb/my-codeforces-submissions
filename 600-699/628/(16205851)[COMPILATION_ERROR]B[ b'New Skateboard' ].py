#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

uLL A[4],B[4],r=0;

int main()
{
ios_base::sync_with_stdio(0);
	string s;
	cin>>s;
	for(string::iterator i = s.begin(); i != s.end(); ++i)
	{
		B[0]=B[1]=B[2]=B[3]=0;
		B[(*i-'0')%4]+=A[0];
		B[(*i-'0'+2)%4]+=A[1];
		B[(*i-'0')%4]+=A[2];
		B[(*i-'0'+2)%4]+=A[2];
		++B[(*i-'0')%4];
		r += B[0];
		for(int i = 0; i < 4; ++i)A[i] = B[i];
	}
	cout<<r;
	return 0;
}
