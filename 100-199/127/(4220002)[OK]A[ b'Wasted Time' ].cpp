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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	double n,k,s=0,i,j,ti,tj;
	cin>>n>>k>>ti>>tj;
	--n;
	while(n--)
	{
		cin>>i>>j;
		s+=sqrt((i-ti)*(i-ti)+(j-tj)*(j-tj));
		ti=i, tj=j;
	}
	cout<<setprecision(9)<<s*k/50;
	return 0;
}