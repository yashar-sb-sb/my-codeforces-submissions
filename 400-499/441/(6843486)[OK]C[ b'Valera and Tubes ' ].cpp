#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>
#include<iomanip>
#include<bitset>
#include<string>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,k;
	cin>>n>>m>>k;
	for(int i = 0; i < k - 1; ++i)
	{
		cout<<"2 "<<(2*i)/m+1<<' '<<((((2*i)/m)&1)?m-((2*i)%m):(2*i)%m+1)<<' '<<(2*i+1)/m+1<<' '<<((((2*i+1)/m)&1)?m-((2*i+1)%m):(2*i+1)%m+1)<<'\n';
	}
	cout<<n*m-2*(k-1);
	for(int i = 2 * k - 2; i < n*m; ++i)
	{
		cout<<' '<<(i)/m+1<<' '<<((((i)/m)&1)?m-((i)%m):(i)%m+1);
	}
	return 0;
}