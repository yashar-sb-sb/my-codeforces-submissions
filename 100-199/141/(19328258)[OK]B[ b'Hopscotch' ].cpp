#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int a,x,y;
	cin>>a>>x>>y;
	if(y%a==0 || y<=0 || x<=-a || x>=a || ((y/a==0||y/a%2)&&(x<=-(float)(a/2)||x>=(float)a/2))||(!(y/a==0 || y/a%2)&& x%a==0))return cout<<-1,0;
	cout<<1+y/a + y/a/2 -(y/a==0 || y/a%2?0:x<0)<<endl;
	return 0;
}
