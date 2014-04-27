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

short ans[26] = {101,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,4,4,4,4,15,4,0,0,0,0};

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	cout<<ans[n];
	return 0;
}