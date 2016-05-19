#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	string t;
	cin>>t;
	int f=0,s=0;
	for(auto i:t)
	{
		f+= i == '4';
		s+= i == '7';
	}
	if(f==0&&s==0)cout<<-1;
	else if(f<s)cout<<7;
	else cout<<4;
	return 0;
}
