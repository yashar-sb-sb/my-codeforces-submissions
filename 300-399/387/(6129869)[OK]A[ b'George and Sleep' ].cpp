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
	int s,t,p;
	char c;
	cin>>c;
	s = (c-'0')*600;
	cin>>c;
	s+=(c-'0')*60;
	cin>>c>>c;
	s+=(c-'0')*10;
	cin>>c;
	s+=c-'0';
	
	cin>>c;
	t = (c-'0')*600;
	cin>>c;
	t+=(c-'0')*60;
	cin>>c>>c;
	t+=(c-'0')*10;
	cin>>c;
	t+=c-'0';
	
	p = s - t;
	if(p<0)
	{
		p += 24*60;
	}
	
	s = p/60;
	p -= s*60;
	cout<<(s/10?"":"0")<<s<<':'<<(p/10?"":"0")<<p;
	return 0;
}