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
ios_base::sync_with_stdio(0);//"nineteen"
	int n=0,i=0,e=0,t=0;
	char c;
	while(cin>>c)
	{
		if(c=='.')break;
		switch(c)
		{
			case 'n':
				++n;
			break;
			case 'i':
				++i;
			break;
			case 'e':
				++e;
			break;
			case 't':
				++t;
			break;
		}
	}
	cout<<min(min((n-1)/2,i),min(e/3,t));
	return 0;
}