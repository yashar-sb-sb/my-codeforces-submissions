#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100000];
int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	string s;
	cin>>s;
	for(int i = 0; i < n; ++i)cin>>A[i];
	int p = 0;
	for(int i = 0; i < 100001; ++i)
	{
		p += A[p] * (s[p] == '<'? -1:1);
		if(p<0 || p>=n)
		{
			cout<<"FINITE";
			return 0;
		}
	}
	cout<<"INFINITE";
	return 0;
}

