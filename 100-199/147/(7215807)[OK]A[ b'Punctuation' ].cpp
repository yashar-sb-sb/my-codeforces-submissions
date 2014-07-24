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
	string s;
	getline(cin,s);
	int i=0;
	while(s[i])
	{
		if(s[i]<'a' || s[i]>'z')
		{
			while(s[i]==' ')++i;
			if(s[i]&&(s[i]<'a' || s[i]>'z'))cout<<s[i++];
			while(s[i]==' ')++i;
			if(s[i])cout<<' ';
		}
		else cout<<s[i++];
	}
	return 0;
}