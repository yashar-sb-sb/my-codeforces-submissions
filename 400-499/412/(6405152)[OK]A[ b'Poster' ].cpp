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
	int n,k;
	string s;
	cin>>n>>k>>s;
	if(k>(1+n)/2)
	{
		while(k++<n)
		{
			cout<<"RIGHT\n";
		}
		k = n-1;
		cout<<"PRINT "<<s[k]<<'\n';
		while(k-->0)
		{
			cout<<"LEFT\n"<<"PRINT "<<s[k]<<'\n';
		}
	}
	else
	{
		while(k-->1)
		{
			cout<<"LEFT\n";
		}
		k = 0;
		cout<<"PRINT "<<s[0]<<'\n';
		while(++k<n)
		{
			cout<<"RIGHT\n"<<"PRINT "<<s[k]<<'\n';
		}
	}
	return 0;
}