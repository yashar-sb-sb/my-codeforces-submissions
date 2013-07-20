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
	int a,b,c,i=0;
	cin>>a>>b>>c;
	while(++i)
	{
		if(!(a%i)&&!(b%i)&&(c==a*b/(i*i)))
		{
			cout<<(i+a/i+b/i)*4;
			return 0;
		}
	}
}