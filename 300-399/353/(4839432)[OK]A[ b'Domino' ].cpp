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
	int n,s1=0,s2=0,a,b;
	bool f = true;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>a>>b;
		if(a%2!=b%2)f = false;
		s1 += a;
		s2 += b;
	}
	if(!(s1%2)&&!(s2%2))cout<<0;
	else if((s1%2+s2%2==1)||((s1%2+s2%2==2)&&f))cout<<-1;
	else cout<<1;
	return 0;
}