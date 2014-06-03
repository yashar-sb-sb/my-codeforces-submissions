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
	int c=0,sum=0,l,t,d;
	string s;
	cin>>s;
	l=s.size();
	for(int i = 0; i < l; ++i)
	{
		t=sum;
		d=l-i;
		while(--d)t/=10;
		t=(l-i)*(abs(s[i]-'0'-(t%10)));
		d=t;
		for(int j = 0; j < l-i)
		{
			sum+=d;
			d*=10;
		}
		c+=t;
	}
	cout<<c;
	return 0;
}