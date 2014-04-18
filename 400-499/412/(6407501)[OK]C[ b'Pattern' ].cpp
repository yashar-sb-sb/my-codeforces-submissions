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
	int n;
	string s[100000],t="";
	cin>>n;
	int i =n;
	while(i--)cin>>s[i];
	int l = s[0].size();
	for(int c = 0; c < l; ++c)
	{
		char ch = '?';
		for(i = 0; i < n; ++i)
		{
			if(s[i][c] != '?')
			{
				if(ch == '?')ch = s[i][c];
				else if(ch != s[i][c])break;
			}
		}
		if(ch == '?')t+="a";
		else if(i == n)
		{
			t+="a";
			t[c] = ch;
		}
		else t+="?";
	}
	cout<<t;
	return 0;
}