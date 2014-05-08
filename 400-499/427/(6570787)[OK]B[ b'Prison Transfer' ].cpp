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
	int n,t,c,i,l=0,s=0;
	cin>>n>>t>>c;
	while(n--)
	{
		cin>>i;
		if(i>t)
		{
			if(l >= c) s += l - c + 1;
			l=0;
		}
		else ++l;
	}
	if(l >= c) s += l - c + 1;
	cout<<s;
	return 0;
}