#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<deque>
#include<stack>
#include<sstream>
#include<iomanip>
#include<bitset>
#include<string>
#include<cstdio>
#include<list>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);
	char a;
	deque<char> s;
	s.push_back('.');
	while(cin>>a)
	{
		if(s.back() == a)s.pop_back();
		else s.push_back(a);
	}
	s.pop_front();
	while(!s.empty())
	{
		cout<<s.front();
		s.pop_front();
	}
	return 0;
}
