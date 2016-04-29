#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

ldb pi = 3.141592653589;

int main()
{
	ios_base::sync_with_stdio(0);
	ldb d,h,v,e;
	cin>>d>>h>>v>>e;
	if(v/((pi*d*d)/4)>e)
	{
		cout<<"YES\n"<<setprecision(10)<<h/(v/((pi*d*d)/4)-e)<<endl;
	}
	else cout<<"NO"<<endl;
	return 0;
}
