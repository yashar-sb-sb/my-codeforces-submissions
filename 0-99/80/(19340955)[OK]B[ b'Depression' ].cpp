#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	ldb h,m;
	int a;
	char c;
	cin>>a>>c>>m;
	cout.precision(10);
	h=a%12;
	cout<<(h/12.0+m/12.0/60.0)*360.0<<' '<<m/60.0*360.0<<endl;
	return 0;
}
