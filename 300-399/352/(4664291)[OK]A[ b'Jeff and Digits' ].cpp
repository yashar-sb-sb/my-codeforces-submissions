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
	int n,f=0,z=0,inp;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		if(inp)++f;
		else ++z;
	}
	f = f/9*9;
	if(f&&z)
	{
		while(f--)cout<<5;
		while(z--)cout<<0;
	}
	else if(z)cout<<0;
	else cout<<-1;
	return 0;
}