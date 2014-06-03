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

bool A[100001];

int main()
{
ios_base::sync_with_stdio(0);
	int n,inp,i;
	cin>>n;
	while(--n)
	{
		cin>>inp;
		A[inp]=true;
	}
	for(i = 1; A[i]; ++i);
	cout<<i;
	return 0;
}