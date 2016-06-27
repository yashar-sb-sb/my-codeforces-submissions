#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	string s="<3";
	string inp;
	while(n--)
	{
		cin>>inp;
		s+=inp;
		s+="<3";
	}
	int i = 0;
	char c;
	while((cin>>c)&&i<s.size())
		if(c==s[i])++i;
	cout<<(i<s.size()?"no":"yes")<<endl;
	return 0;
}
