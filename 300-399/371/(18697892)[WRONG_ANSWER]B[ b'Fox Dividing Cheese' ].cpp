#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int a,b,c=0;
	cin>>a>>b;
	while(a!=b)
	{
		++c;
		if(a<b)swap(a,b);
		if(a%2==0)a/=2;
		else if(a%3==0)a/=3;
		else if(a%5==0)a/=5;
		else {c=-1;break;}
	}
	cout<<c;
	return 0;
}
