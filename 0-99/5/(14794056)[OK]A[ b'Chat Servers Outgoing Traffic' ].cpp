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
#include<fstream>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	//ifstream fin("pro.in");
	//ofstream fout("pro.out");
	int c = 0, r = 0;
	string s;
	while(getline(cin,s))
	{
		if(s[0] == '+')++c;
		else if(s[0] == '-')--c;
		else
		{
			r += c*(s.size() - s.find(':')-1);
		}
	}
	cout<<r;
	return 0;
}
