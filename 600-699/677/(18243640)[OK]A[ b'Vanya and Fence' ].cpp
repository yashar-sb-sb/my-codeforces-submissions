#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,h,s = 0,inp;
	cin>>n>>h;
	while(n--)
	{
		cin>>inp;
		s += 1 + (inp>h);
	}
	cout<<s<<endl;
	return 0;
}
