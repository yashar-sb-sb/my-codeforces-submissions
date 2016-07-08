#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string S[30];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>S[i];
	for(char i = 'a'; i <= 'z'; ++i)
	{
		bool f = true;
		for(int j = 0; j < n; ++j)
		{
			if(S[j].find(i) != -1){f = false; break;}
		}
		if(f)return cout<<i,0;
	}
	string s = "  ";
	for(char i = 'a'; i <= 'z'; ++i)
	{
		s[0] = i;
		for(char j = 'a'; j <= 'z'; ++j)
		{
			s[1] = j;
			bool f = true;
			for(int k = 0; k < n; ++k)
			{
				if(S[k].find(s)!=-1){f=false;break;}
			}
			if(f)return cout<<s,0;
		}
	}
	return 0;
}
