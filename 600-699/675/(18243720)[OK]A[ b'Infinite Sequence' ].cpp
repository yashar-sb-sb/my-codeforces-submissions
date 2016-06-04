#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int a,b,c;
	cin>>a>>b>>c;
	if(b == a)return cout<<"YES",0;
	if(!c)return cout<<"NO",0;
	if((b-a<0) ^ (c<0))return cout<<"NO",0;
	cout<<((b-a)%c?"NO":"YES");
	return 0;
}
