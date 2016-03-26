#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	ldb d, l, v1, v2;
	cin>> d >> l >> v1 >> v2;
	cout<<setprecision(20)<<fixed<<(l-d)/(v1+v2);
	return 0;
}
