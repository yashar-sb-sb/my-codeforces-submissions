#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

int A['z'+1];
queue<string> S;
char C[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	string s;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>s;
		S.push(s);
	}
	while(!S.empty())
	{
		s = S.front();
		S.pop();
		A[s[0]]=30;
		for(int i = 'a'; i <= 'z'; ++i)A[s[0]] = max(A[s[0]],A[i]+1);
		for(int i = 1; i < s.size(); ++i)A[s[i]] = A[s[i-1]]+1;
		for(int i = -n; i <= n && !S.empty(); ++i)
		{
			for(int k = -n; k <= n && !S.empty(); ++k)
			{
				s = S.front();
				S.pop();
				for(int j = 0; j < s.size(); ++j)
				{
					if(A[s[j]])A[s[0]] = A[s[j]]-j;
				}
				if(A[s[0]])
				{
					for(int l = 1; l < s.size(); ++l)A[s[l]] = A[s[l-1]]+1;
				}
				else S.push(s);
			}
		}
	}
	int mi = 100;
	for(int i = 'a'; i <= 'z'; ++i)if(A[i])mi=min(mi, A[i]);
	for(char c = 'a'; c <= 'z'; ++c)C[A[c]]=c;
	for(int i = 1; i < 100; ++i)if(C[i])cout<<C[i];cout<<endl;
	return 0;
}