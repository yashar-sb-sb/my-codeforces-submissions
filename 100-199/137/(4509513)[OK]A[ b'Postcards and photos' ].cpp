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
	int n=0,a=1;
	char c,t;
	cin>>t;
	while(cin>>c)
	{
		if(c == t)
			++a;
		else
		{
			n+=ceil(a/5.0);
			t = c;
			a = 1;
		}
	}
	n+=ceil(a/5.0);
	cout<<n;
	return 0;
}