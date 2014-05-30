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
	int k,i;
	char s[19];
	cin>>s>>k;
	while(k--)
	{
		for(i = 1; s[i] && s[i]<=s[i-1]; ++i);
		if(!s[i])break;
		swap(s[i],s[i-1]);
	}
	cout<<s;
	return 0;
}