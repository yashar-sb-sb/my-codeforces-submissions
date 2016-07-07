#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	char c;
	int opens = 0, balance = 0;
	while(cin>>c)
	{
		if(c=='(')++opens, ++balance;
		else balance=max(balance-1,0);
	}
	cout<<(opens-balance)*2<<'\n';
	return 0;
}
