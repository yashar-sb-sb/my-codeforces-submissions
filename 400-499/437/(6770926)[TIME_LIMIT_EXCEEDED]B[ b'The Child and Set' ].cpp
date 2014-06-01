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
#include<set>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int s,l,mt;
	set<int> res;
	cin>>s>>l;
	mt = l;
	while(s)
	{
		int t = 1;
		
		while(t<=mt&&t<=s)t*=2;
		t/=2;
		if(t==0){cout<<-1; return 0;}
		int i = 1;
		while(i*t<=l && res.find(i*t)!=res.end())i+=2;
		if(i*t>l)
		{
			mt = t/2;
		}
		else
		{
			res.insert(i*t);
			s-=t;
		}
	}
	cout<<res.size()<<'\n';
	for(set<int>::iterator i = res.begin(); i != res.end(); ++i)cout<<*i<<' ';
	return 0;
}