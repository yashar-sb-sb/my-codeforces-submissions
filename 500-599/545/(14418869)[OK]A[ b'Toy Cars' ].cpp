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
	int n,inp;
	vector<int> r;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		bool f = true;
		for(int j = 0; j < n; ++j)
		{
			cin>>inp;
			if(inp == 1 || inp == 3)f = false;
		}
		if(f)r.push_back(i+1);
	}
	cout<<r.size();
	for(vector<int>::iterator i = r.begin(); i != r.end(); ++i)cout<<' '<<*i;
	return 0;
}
