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
	map<string,int> db;
	int n,i;
	string name;
	cin>>n;
	ostringstream oss;
	while(n--)
	{
		cin>>name;
		if(!(i = db[name]++))
		{
			cout<<"OK\n";
		}
		else
		{
			--i;
			do
			{
				oss.str("");
				oss<<name<<++i;
			}
			while(db[oss.str()]);
			oss.str("");
			oss<<i;
			name+=oss.str();
			cout<<name<<'\n';
			db[name] = 1;
		}
	}
	return 0;
}