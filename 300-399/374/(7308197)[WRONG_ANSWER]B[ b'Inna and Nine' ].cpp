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
	char c,t=0;
	LL s=1, a=0;
	while(cin>>c)
	{
		if(c+t-'0'=='9')++a;
		else
		{
			if(a>1&&a%2)s*=a-1;
			a=0;
		}
		t=c;
	}
	if(a>1&&a%2)s*=a-1;
	cout<<s;
	return 0;
}