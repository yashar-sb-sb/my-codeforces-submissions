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
#include<cstdio>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int i=1,hc=-1,mc=-1;
	LL sum=0;
	int t;
	string s;
	cin>>s;
	hc = s.find("heavy",hc+1);
	do
	{
		mc = s.find("metal",mc+1);
		while(hc<mc&&hc!=string::npos)
		{
			hc = s.find("heavy",hc+1);
			++i;
		}
		sum+=i-1;
	}while(mc!=string::npos);
	cout<<sum-i+1;
	cin>>s;
	return 0;
}