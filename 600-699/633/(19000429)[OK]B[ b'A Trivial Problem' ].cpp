#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int m,a = 0,c = 0,t;
	cin>>m;
	while(c < m)
	{
		a+=5;
		t = a;
		while(!(t%5))
		{
			++c;
			t/=5;
		}
	}
	if(c==m)
	{
		cout<<"5\n";
		for(int i = 0; i < 5; ++i)cout<<a+i<<' ';
	}
	else cout<<"0\n";
	return 0;
}
