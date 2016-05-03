#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;
string AA[] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
set<string> A(AA,AA+11);

int main()
{
	ios_base::sync_with_stdio(0);
	int n,r=0;
	cin>>n;
	string s;
	while(n--)
	{
		cin>>s;
		if(A.find(s) != A.end())++r;
		else
		{
			int i = 0;
			for(auto ii:s)
			{
				if(!isdigit(ii))i = 1;
			}
			if(i)continue;
			stringstream ss(s);
			ss>>i;
			if(i < 18)++r;
		}
	}
	cout<<r;
	return 0;
}
