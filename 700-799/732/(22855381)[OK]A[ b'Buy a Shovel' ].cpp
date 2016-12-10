#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	int k, r;
	cin>>k>>r;
	k%=10;
	int t = 0;
	while(++t*k%10!=r&&t*k%10);
	cout<<t<<endl;
	return 0;
}