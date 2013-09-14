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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,t,i,s=1;
	cin>>n;
	--n;
	cin>>i;
	while(n--)
	{
		t = i;
		cin>>i;
		if(t!=i)++s;
	}
	cout<<s;
	return 0;
}