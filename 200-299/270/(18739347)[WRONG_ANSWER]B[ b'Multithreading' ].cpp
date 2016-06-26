#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,inp,c=1;
	cin>>n;
	set<int> s;
	while(n)
	{
		if(s.find(c)!=s.end())
		{
			++c;
		}
		else
		{
			cin>>inp;
			--n;
			if(inp!=c)
			{
				s.insert(inp);
			}
			else
			{
				++c;
			}
		}
	}
	cout<<s.size();
	return 0;
}
