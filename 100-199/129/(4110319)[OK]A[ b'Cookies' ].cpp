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
	int n,o=0,e=0,i;
	cin>>n;
	while(n--)
	{
		cin>>i;
		if(i%2)
		{
			++o;
		}
		else
		{
			++e;
		}
	}
	cout<<(o%2?o:e);
	return 0;
}