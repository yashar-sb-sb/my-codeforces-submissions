#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;


int main()
{
	int n;
	cin>>n;
	if(n==1)cout<<-1<<endl;
	else cout<<n<<' '<<n+1<<' '<<n*n+n<<endl;
	return 0;
}