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
	int n,m,c=1;
	double s=0;
	cin>>n>>m;
	while(cin>>m)
	{
		if(c<m)s+=m-c;
		else if(c>m)s+=n-c+m;
	}
	cout <<s;
	return 0;
}