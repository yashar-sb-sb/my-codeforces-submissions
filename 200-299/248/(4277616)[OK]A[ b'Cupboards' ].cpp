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
	int n,nn,l,r,t1=0,t2=0;
	cin>>n;
	nn = n;
	while(nn--)
	{
		cin>>l>>r;
		if(l)++t1;
		if(r)++t2;
	}
	cout<<min(t1,n-t1)+min(t2,n-t2);
	return 0;
}