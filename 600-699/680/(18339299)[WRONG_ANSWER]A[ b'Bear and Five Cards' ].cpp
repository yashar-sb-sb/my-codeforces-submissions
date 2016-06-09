#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int t[6],s=0;

int main()
{
ios_base::sync_with_stdio(0);
	for(int i = 0; i < 5; s += t[i++])cin>>t[i];
	int m = s;
	sort(t,t+5);
	for(int i = 1; i < 5; ++i)
	{
		if(t[i] == t[i+1])m = min(s-(2+(t[i-1]==t[i]))*t[i],m);
	}
	cout<<m;
	return 0;
}
