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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,f,s,i;
	cin>>n;
	if(n==1)cout<<"NO";
	else
	{
		cin>>f>>s;
		--n;
		while(f==s && --n)cin>>s;
		if(f>s)swap(f,s);
		if(n)while(--n)
		{
			cin>>i;
			if(i<f)
			{
				s=f;
				f=i;
			}
			else if(i>f&&i<s)s=i;
		}
		if(f==s)cout<<"NO";
		else cout<<s;
	}
	return 0;
}