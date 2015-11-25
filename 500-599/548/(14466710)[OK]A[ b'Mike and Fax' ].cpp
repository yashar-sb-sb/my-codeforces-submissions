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
	string s;
	int k;
	cin>>s>>k;
	if(s.size() != s.size()/k*k)
	{
		cout<<"NO";
		return 0;
	}
	k = s.size()/k;
	for(int i = 0; i < s.size(); i+=k)
	{
		for(int j = 0; j < k; ++j)if(s[i+j] != s[i+k-1-j])
		{
			cout<<"NO";return 0;
		}
	}
	cout<<"YES";return 0;
	return 0;
}
