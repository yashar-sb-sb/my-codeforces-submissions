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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,s=0,i,x;
	cin>>n>>x;
	while(n--)
	{
		cin>>i;
		s+=i;
	}
	cout<<ceil(((float)abs(s)/x));
	return 0;
}