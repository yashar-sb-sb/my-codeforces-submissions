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
	int n,i=0,t,m;
	cin>>n;
	while(n)
	{
		++i;
		m=n%10;
		t=n/10;
		while(t)
		{
			if(t%10>m)m=t%10;
			t/=10;
		}
		n-=m;
	}
	cout<<i;
	return 0;
}