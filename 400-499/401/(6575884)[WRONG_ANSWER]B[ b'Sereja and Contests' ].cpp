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
	int n,k,inp,s;
	cin>>n>>k;
	s = n-1;
	while(k--)
	{
		cin>>inp;
		if(inp==1)
		{
			s-=2;
			cin>>inp>>inp;
		}
		else
		{
			--s;
			cin>>inp;
		}
	}
	cout<<s/2+s%2<<' '<<s;
	return 0;
}