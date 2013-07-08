#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	int n,t;
	cin>>n;
	if(n%2)
	{
		cout<<-1;
	}
	else
	{
		n/=2;
		for(int i = 0; i < n; ++i)
		{
			cout<<2*i+2<<' '<<2*i+1<<' ';
		}
	}
	return 0;
}