#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	string s;
	cin>>n>>s;
	s+="..";
	for(int i = 0; i < n;)
	{
		if(s[i] == 'o' && s[i+1] == 'g' && s[i+2] == 'o')
		{
			s[i++] = '*';
			while(s[i] == 'g' && s[i+1] == 'o')
			{
				s[i++] = '*';
				s[i++] = '*';
			}
			cout<<"***";
		}
		else cout<<s[i++];
	}
	cout<<endl;
	return 0;
}