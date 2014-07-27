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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string S[8]={ "vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
bool B[8];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	string s;
	cin>>n>>s;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < 8; ++j)
		{
			if(S[j].size()==n&&s[i]!='.'&&tolower(S[j][i])!=tolower(s[i]))S[j]="";
		}
	}
	for(int i = 0; i < 8; ++i)
	{
		if(S[i].size()==n)cout<<S[i];
	}
	return 0;
}