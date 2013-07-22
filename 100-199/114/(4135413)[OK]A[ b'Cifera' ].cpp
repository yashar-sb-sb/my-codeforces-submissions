#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);
	LL k,l,c=0,t;
	cin>>k>>l;
	t = k;
	while(t<l)
	{
		t*=k;
		++c;
	}
	if(t==l)
	{
		cout << "YES\n"<<c;
	}
	else
	{
		cout<< "NO";
	}
	return 0;
}