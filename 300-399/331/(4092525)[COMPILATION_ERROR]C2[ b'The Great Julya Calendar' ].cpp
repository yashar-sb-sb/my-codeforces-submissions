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
	long long n,i=0,t,m,tt;
	cin>>n;
	while(n)
	{
		++i;
		m=n%10;
		t=n/10;
		while(t)
		{
			tt = t%10;
			if(tt>m)m=tt,c=0;
			else if(tt == m)++c;
			
			t/=10;
		}
		if(m==9&&c)
		{
			i+=c;
			n-=c*9+9;
		}
		else n-=m;
	}
	cout<<i;
	return 0;
}