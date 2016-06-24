#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	char c;
	int a=0;
	while(cin>>c)
	{
		if(c=='y')++a;
		else --a;
	}
	if(a>0)while(a--)cout<<'y';
	else while(a++)cout<<'x';
	cout<<endl;
	return 0;
}
