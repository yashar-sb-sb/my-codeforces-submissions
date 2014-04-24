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

bitset<10> b;

int main()
{
ios_base::sync_with_stdio(0);
	int k,n,s=0,i;
	cin>>n>>k;
	while(n--)
	{
		b.reset();
		cin>>i;
		while(i)
		{
			if(i%10<=k)b.set(i%10);
			i/=10;
		}
		if(b.count()>k)++s;
	}
	cout<<s;
	return 0;
}