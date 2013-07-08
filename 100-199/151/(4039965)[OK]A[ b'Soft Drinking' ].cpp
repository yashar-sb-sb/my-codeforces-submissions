#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include <map>

using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	cout<<min(k*l/nl,min(p/np,c*d))/n;
	return 0;
}