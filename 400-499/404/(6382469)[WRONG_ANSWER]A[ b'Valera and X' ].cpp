#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>
#include<iomanip>
#include<bitset>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	char a,b,c;
	cin>>n>>a>>b;
	for(int i = 3; i < n; ++i)
	{
		cin>>c;
		if(c!=b)
		{
			cout<<"NO";
			return 0;
		}
	}
	cin>>c;
	if(c!=a)
	{
		cout<<"NO";
		return 0;
	}
	for(int i = 1; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			cin>>c;
			if(i == j || i == n-j-1)
			{
				if(c!=a)
				{
					cout<<"NO";
					return 0;
				}
			}
			else if(c!=b)
			{
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES";
	return 0;
}