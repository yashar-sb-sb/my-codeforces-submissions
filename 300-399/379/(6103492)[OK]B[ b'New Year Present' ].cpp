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
	int n,i;
	cin>>n>>i;
	while(i--)
	{
		cout<<"P"<<(i?"RL":"");
	}
	while(--n)
	{
		cin>>i;
		cout<<"R";
		while(i--)
		{
			cout<<"P"<<(i?"LR":"");
		}
	}
	return 0;
}