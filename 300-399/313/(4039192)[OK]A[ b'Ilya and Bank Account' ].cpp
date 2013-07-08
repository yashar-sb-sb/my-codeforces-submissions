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
	int n;
	cin>>n;
	if(n<0)
	{
		n*=-1;
		cout<<-min(n/10,n/100*10+n%10);
	}
	else
	{
		cout<<n;
	}
	return 0;
}