#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[1<<8];

int main()
{
ios_base::sync_with_stdio(0);
	string s;
	cin>>s;
	A['>'] = 8;
	A['<'] = 9;
	A['+'] = 10;
	A['-'] = 11;
	A['.'] = 12;
	A[','] = 13;
	A['['] = 14;
	A[']'] = 15;
	int res = 0;
	for(auto i:s)
	{
		res = (16*res + A[i])%(int(1e6+3));
	}
	cout<<res<<endl;
	return 0;
}
