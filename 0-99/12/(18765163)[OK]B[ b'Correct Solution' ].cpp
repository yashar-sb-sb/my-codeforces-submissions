#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	string n,m;
	cin>>n>>m;
	if(m[0] == '0'&&n[0]!='0')return cout<<"WRONG_ANSWER",0;
	for(int i = 2; i < m.size(); ++i)
		if(m[i] < m[i-1])return cout<<"WRONG_ANSWER",0;
	sort(n.begin(),n.end());
	sort(m.begin(),m.end());
	if(m!=n)return cout<<"WRONG_ANSWER",0;
	cout<<"OK";
	return 0;
}
