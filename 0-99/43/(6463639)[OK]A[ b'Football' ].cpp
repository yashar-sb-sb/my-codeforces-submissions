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
#include<string>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	string first,second,i;
	int fi=1,se=0;
	cin>> n;
	cin>> first;
	while(--n)
	{
		cin>>i;
		if(i==first)++fi;
		else second = i, ++se;
	}
	cout<<(fi>se?first:second);
	return 0;
}