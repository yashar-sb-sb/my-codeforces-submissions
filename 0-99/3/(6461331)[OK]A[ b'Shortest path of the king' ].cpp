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
	char c,d;
	int h1,v1,h2,v2;
	cin>>c>>v1;
	h1 = c-'a';
	cin>>c>>v2;
	h2 = c-'a';
	h1=h2-h1;
	v1-=v2;
	c=h1>0?'R':'L';
	d=v1>0?'D':'U';
	h1=abs(h1);
	v1=abs(v1);
	cout<<max(h1,v1)<<'\n';
	for(;h1>0||v1>0;--h1,--v1)
	{
		if(h1>0)cout<<c;
		if(v1>0)cout<<d;
		cout<<'\n';
	}
	return 0;
}