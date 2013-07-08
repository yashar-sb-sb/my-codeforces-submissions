#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	int n, k;
	cin>> n>>k;
	k = n-k;
	for(;n > k; --n)cout<<n<<' ';
	int i;
	++k;
	for(i = 1; i < k; ++i)cout<<i<<' ';
	cin>> n;
	return 0;
}