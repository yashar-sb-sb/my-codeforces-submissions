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

bool X[101],Y[101];

int main()
{
ios_base::sync_with_stdio(0);
	int n, x=0, y=0, i;
	cin>>n;
	while(n--)
	{
		cin>>i;
		if(!X[i])++x;
		X[i]=true;
		cin>>i;
		if(!Y[i])++y;
		Y[i]=true;
	}
	cout<<min(x,y);
	return 0;
}