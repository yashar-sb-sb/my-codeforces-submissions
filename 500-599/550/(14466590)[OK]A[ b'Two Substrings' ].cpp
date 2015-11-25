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
	int f=0;
	string s,a="AB",b="BA";
	cin>>s;
	if(s.find(a)!=string::npos && s.find(b,s.find(a)+2) != string::npos)cout<<"YES";
	else if(s.find(b)!=string::npos && s.find(a,s.find(b)+2) != string::npos)cout<<"YES";
	else cout<<"NO";
	return 0;
}
