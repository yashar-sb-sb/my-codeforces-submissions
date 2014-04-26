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
	cin>>n;
	do
	{
		char s[10] = "OO|OOOOO\n";
		int i = n%10;
		if(i>5)
		{
			s[0] = '-';
			i-=5;
		}
		else
		{
			s[1] = '-';
		}
		s[i+3] = '-';
		cout<<s;
		n/=10;
	}while(n);
	return 0;
}