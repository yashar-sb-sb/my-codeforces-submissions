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

int k[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,sum,inp,mi=51500;
	cin>>n;
	for(int i = 0; i < n; cin>>k[i++]);
	for(int i = 0; i < n; ++i)
	{
		sum=0;
		for(int j = 0; j < k[i]; ++j)
		{
			cin>>inp;
			sum+=inp;
		}
		mi=min(mi,5*(sum+3*k[i]));
	}
	cout<<mi;
	return 0;
}