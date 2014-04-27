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
	int n,m,s=0,inp,max=0;
	cin>>n>>m;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		s+=inp;
		if(max>inp)min=inp;
	}
	cout<<(s-min<=m?"YES":"NO");
	return 0;
}