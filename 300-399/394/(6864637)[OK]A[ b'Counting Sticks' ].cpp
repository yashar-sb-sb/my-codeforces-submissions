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
	int a=0,b=0,c=0;
	char ch;
	while(cin>>ch && ch=='|')++a;
	while(cin>>ch && ch=='|')++b;
	while(cin>>ch)++c;
	if(c>1 && a+b+2==c)
	{
		++a,--c;
	}
	else if(a+b>2 && a+b==c+2)
	{
		if(a>b)--a;
		else --b;
		++c;
	}
	else if(a+b!=c)
	{
		cout<<"Impossible";
		return 0;
	}
	while(a--)cout<<'|';
	cout<<'+';
	while(b--)cout<<'|';
	cout<<'=';
	while(c--)cout<<'|';
	return 0;
}