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
	int n,d,s=0,i,t;
	cin>>n>>d;
	t=n;
	while(t--)
	{
		cin>>i;
		s+=i;
	}
	if(10*(n-1)+s>d)
	{
		cout<<-1;
		return 0;
	}
	cout<<(d-s)/5;
	return 0;
}