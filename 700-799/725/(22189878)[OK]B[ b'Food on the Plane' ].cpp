#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL seats[6] = {4,5,6,3,2,1};

int main()
{
ios_base::sync_with_stdio(0);
	LL row = 0,ans;
	char c;
	while(cin>>c,c<'a')
	{
		row = 10*row + c - '0';
	}
	--row;
	ans = seats[c-'a'];
	LL att = row/2%2+1;
	ans += row - (att-1)*2;
	ans += row/4*12+row%2*6;
	cout<<ans<<endl;
	return 0;
}