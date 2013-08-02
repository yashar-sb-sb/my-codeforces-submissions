#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	short n,m,i;
	bool f=true;
	cin>>n;
	while(f)
	{
		++n;
		f = false;
		m = ceil(sqrt(n))+1;
		for(i = 2; i < m; ++i)
		{
			if(!(n%i))
			{
				f = true;
				break;
			}
		}
	}
	cin>>m;
	cout<<(n==m?"YES":"NO");
	return 0;
}