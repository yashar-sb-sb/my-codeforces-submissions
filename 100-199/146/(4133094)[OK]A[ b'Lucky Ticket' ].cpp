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
	char c;
	int nn,n,s1=0,s2=0;
	cin>>n;
	n/=2;
	nn=n;
	while(n--)
	{
		cin>>c;
		if(c == '4')s1+=4;
		else if( c == '7')s1+=7;
		else
		{
			cout<<"NO";
			return 0;
		}
	}
	while(nn--)
	{
		cin>>c;
		if(c == '4')s2+=4;
		else if( c == '7')s2+=7;
		else
		{
			cout<<"NO";
			return 0;
		}
	}
	if(s1==s2)cout<<"YES";
	else cout<<"NO";
	return 0;
}