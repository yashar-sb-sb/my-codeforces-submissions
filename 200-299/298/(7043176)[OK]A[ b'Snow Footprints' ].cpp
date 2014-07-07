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
	int s,t,i=0;
	char c;
	cin>>s;
	while(++i)
	{
		cin>>c;
		if(c!='.')
		{
			s=i;
			break;
		}
	}
	do
	{
		if(c=='R')t=i+1;
		if(c=='L')
		{
			t=i-1;
			break;
		}
		++i;
	}while(cin>>c);
	cout<<s<<' '<<t;
	return 0;
}