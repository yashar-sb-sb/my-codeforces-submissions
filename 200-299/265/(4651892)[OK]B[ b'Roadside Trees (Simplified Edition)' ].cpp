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
	int n,i,p=0,s;
	cin>>n;
	s = 2*n-1;
	while(n--)
	{
		cin>>i;
		s+=abs(i-p);
		p=i;
	}
	cout<<s;
	return 0;
}