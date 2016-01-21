#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	LL a, b, c, d;
	cin>>a>>b>>c>>d;
	cout<<max(abs(a-c),abs(b-d));
	return 0;
}
