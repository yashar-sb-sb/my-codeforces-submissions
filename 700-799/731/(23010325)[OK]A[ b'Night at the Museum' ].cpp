#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	int ans = 0;
	char p,c;
	p = 'a';
	while(cin>>c)
	{
		ans += min((26+c-p)%26,(26+p-c)%26);
		p = c;
	}
	cout<<ans<<endl;
	return 0;
}