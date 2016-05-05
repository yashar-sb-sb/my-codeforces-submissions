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
	int res = n/7 * 2;
	int mi, ma;
	if(n%7 == 6) mi = res + 1;
	else mi = res;
	ma = res + min(n%7,2);
	cout<<mi<<' '<<ma;
	return 0;
}
 
