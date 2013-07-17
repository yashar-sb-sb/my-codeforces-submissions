#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	y=ceil((double)y*n/100-x);
	if(y<0)y=0;
	cout<<y;
	return 0;
}