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
	int n,k,i,m,c=0;
	cin>>n>>k;
	++k;
	while(n--)
	{
		cin>>i;
		m=0;
		while(i)
		{
			if(i%10==4||i%10==7)++m;
			i/=10;
		}
		if(m<k)++c;
	}
	cout<<c;
	return 0;
}