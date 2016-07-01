#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	string n;
	cin>>n;
	cout<<n;
	for(string::reverse_iterator i = n.rbegin(); i != n.rend(); ++i)cout<<*i;
	cout<<endl;
	return 0;
}
