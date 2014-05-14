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

int main()
{
ios_base::sync_with_stdio(0);
	int i=-1;
	string s;
	getline(cin,s);
	while(i<s.size()||i==-1)
	{
		while(s[++i]==' ');
		if(s[i]=='"')
		{
			cout<<"<";
			while(s[++i]!='"')cout<<s[i];
			cout<<">\n";
		}
		else if(s[i]!='\0')
		{
			cout<<"<";
			--i;
			while(s[++i]!=' '&&s[i]!='\0')cout<<s[i];
			cout<<">\n";
		}
	}
	return 0;
}