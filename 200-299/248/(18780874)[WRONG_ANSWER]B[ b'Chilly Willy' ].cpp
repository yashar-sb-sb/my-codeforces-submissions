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
	--n;
	if(n<3)
	{
		if(n==2)return cout<<"210",0;
		return cout<<-1,0;
	}
	int m = n%6,t;
	if(m<3)t = 2, ++m;
	else if(m==3)t = 5, m = 1;
	else t = 8, m -= 3;
	cout<<1;
	for(int i = m+1; i < n; ++i)cout<<'0';
	cout<<t;
	for(int i = 0; i < m; ++i)cout<<'0';
	cout<<endl;
	return 0;
}
