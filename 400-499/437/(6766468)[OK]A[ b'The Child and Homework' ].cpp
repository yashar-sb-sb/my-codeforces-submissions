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
	int a,b,c,d,t=0;
	string s;
	cin>>s;
	a = s.size()-2;
	cin>>s;
	b = s.size()-2;
	cin>>s;
	c = s.size()-2;
	cin>>s;
	d = s.size()-2;
	
	int ar[4] = {a,b,c,d};
	sort(ar,ar+4);
	if(2*ar[0]<=ar[1])++t;
	if(ar[3]>=2*ar[2])++t;
	if(t == 2 || t == 0)cout<<"C";
	else
	{
		if(2*ar[0]<=ar[1])
		{
			if(ar[0] == a)
			cout<<"A";
			if(ar[0] == b)
			cout<<"B";
			if(ar[0] == c)
			cout<<"C";
			if(ar[0] == d)
			cout<<"D";
		}
		else if(ar[3]>=2*ar[2])
		{
			if(ar[3] == a)
			cout<<"A";
			if(ar[3] == b)
			cout<<"B";
			if(ar[3] == c)
			cout<<"C";
			if(ar[3] == d)
			cout<<"D";
		}
	}
	return 0;
}