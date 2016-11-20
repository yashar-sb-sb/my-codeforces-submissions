#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

string S[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>S[i];
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = i + 1; j < n; ++i)
		{
			int tmp = S[i].find(S[j][0]);
			if(tmp != -1)
			{
				for(int k = S[i].size()-tmp; k < S[j].size(); ++k)
					S[i].push_back(S[j][k]);
				S[j] = S[i];
				S[i] = "";
			}
			
			tmp = S[j].find(S[i][0]);
			if(tmp != -1)
			{
				for(int k = S[j].size()-tmp; k < S[i].size(); ++k)
					S[j].push_back(S[i][k]);
				S[i] = "";
			}
		}
		cout<<S[i];
	}
	return 0;
}