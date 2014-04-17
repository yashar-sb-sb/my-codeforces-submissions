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
	string s,t;
	int l=0,r,c,i=-1,j;
	cin>>s>>t;
	while(s[l++]!='|');
	r = s.size() - l--;
	c = t.size();
	if(abs(l-r)>c || (l+r+c)%2)
	{
		cout<<"Impossible";
		return 0;
	}
	j = (r+l+c)/2-l;
	while(++i<j)cout<<t[i];
	--i;
	cout<<s;
	while(++i<c)cout<<t[i];
	return 0;
}