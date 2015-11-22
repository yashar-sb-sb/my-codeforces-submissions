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
#include<cstdio>
#include<list>
#include<set>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string S1[20] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten",
		"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
string S10[10] = {"zero","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	if(n < 20)cout<<S1[n];
	else
	{
		cout<<S10[n/10];
		if(n%10)cout<<'-'<<S1[n%10];
	}
	return 0;
}
