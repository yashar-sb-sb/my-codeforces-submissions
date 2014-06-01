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
	int n,_1=0,_2=0,inp;
	cin>>n;
	while(n--)
	{
		cin>>inp;
		if(inp==100) ++_1;
		else ++_2;
	}
	cout<<(_1%2==0&&(_2%2==0||_1>1)?"YES":"NO");
	return 0;
}