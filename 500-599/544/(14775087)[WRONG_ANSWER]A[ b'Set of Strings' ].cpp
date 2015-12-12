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
#include<list>
#include<set>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int k;
	string s;
	cin>>k>>s;
	if(k>s.size())
	{
		cout<<"NO";
		return 0;
	}
	cout<<"YES\n";
	--k;
	for(int i = 0; i < k; ++i)cout<<s[i]<<'\n';
	for(; k < s.size(); ++k)cout<<s[k];
	return 0;
}
