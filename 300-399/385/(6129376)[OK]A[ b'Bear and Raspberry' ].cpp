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
	int m=0,n,c,p=0,i;
	cin>>n>>c;
	while(n--)
	{
		cin>>i;
		if(m<p-i)
		{
			m = p - i;
		}
		p = i;
	}
	cout<<max(m - c,0);
	return 0;
}