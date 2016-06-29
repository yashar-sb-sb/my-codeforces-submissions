#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	
int n;
	cin>>n;
	n;
	if(n<4)
	{
		if(n==3)return cout<<"210",0;
		return cout<<-1,0;
	}
	int m = 1;
	for(int i = 2; i < n; ++i)m = m*10%7;
	int t;
	cout<<'1';
	for(int i = 4; i < n; ++i)cout<<'0';
	for(t = 0; (m+t)%7 || (1 + t/10 +t%10) % 3; ++t);
	if(t/10)cout<<t<<0;
	else cout<<0<<t<<0;
	cout<<endl;
	return 0;
}
