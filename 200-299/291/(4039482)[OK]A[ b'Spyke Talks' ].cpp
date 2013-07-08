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
	int n,i,t,c=0;
	cin>>n;
	map<int,int> map;
	while(n--)
	{
		cin>>i;
		if(i>0)
		{
			t = ++map[i];
			if(t==2)++c;
			else if(t>2)
			{
				cout<<-1;
				return 0;
			}
		}
	}
	cout<<c;
	return 0;
}