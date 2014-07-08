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
	int n,s,a,b;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		s=0;
		while(a&&b)
		{
			if(a<b)
			{
				swap(a,b);
			}
			s+=a/b;
			a%=b;
		}
		cout<<s<<'\n';
	}
	return 0;
}