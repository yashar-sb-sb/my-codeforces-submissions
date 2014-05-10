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
	int v;
	uLL l=0,r=0;
	string s;
	cin>>s;
	v=s.find('^');
	for(int i = v + 1; i < s.size(); ++i)if(isdigit(s[i]))r+=(i-v)*(s[i]-'0');
	for(int i = v - 1; i > -1; --i)if(isdigit(s[i]))l+=(v-i)*(s[i]-'0');
	if(l>r)cout<<"left";
	else if(r>l)cout<<"right";
	else cout<<"balance";
	return 0;
}