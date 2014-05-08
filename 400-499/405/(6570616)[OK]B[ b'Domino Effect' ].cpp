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
	int n,i,j,s=0;
	char c,C='t';
	cin>>n;
	for(i=0; i < n; ++i)
	{
		cin>>c;
		if(c!='.'){C=c;break;}
	}
	if(c=='R')s+=i;
	++i;
	for(j=i-1; i < n; ++i)
	{
		cin>>c;
		if(c!='.')
		{
			if(c=='R')s+=i-j-1;
			else if(!((i-j)%2))++s;
			j = i;
			C=c;
		}
	}
	if(C=='L')s+=n-j-1;
	else if(C=='t')s=n;
	cout<<s;
	return 0;
}