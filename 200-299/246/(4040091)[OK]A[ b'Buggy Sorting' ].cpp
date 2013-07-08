#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include <map>

using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	int n;
	cin>>n;
	if(n<3)
	{
		cout<<-1;
	}
	else
	{
		for(int i = n; i > 1; --i)cout<<i<<' ';
		cout<<1;
	}
	return 0;
}