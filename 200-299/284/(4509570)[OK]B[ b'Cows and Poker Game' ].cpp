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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int i=0,a=0,n;
	char c;
	cin>>n;
	while(n--)
	{
		cin>>c;
		if(c=='I')++i;
		else if(c=='A')++a;
	}
	if(!i)cout<<a;
	else if(i==1)cout<<1;
	else cout<<0;
	return 0;
}