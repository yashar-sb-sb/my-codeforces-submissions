#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>
#include<iomanip>
#include<bitset>
#include<string>
#include<cstdio>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	string s,t;
	cin>>s>>t;
	if(s.size()==t.size())
	{
		int A[2];
		int l = s.size(), j=0;
		for(int i = 0; i < l && j < 3; ++i)
		{
			if(s[j]!=t[j])A[j++]=i;
		}
		if(j==2&&s[A[0]]==t[A[1]]&&s[A[1]]==t[A[0]]){cout<<"YES"; return 0;}
	}
	cout<<"NO";
	return 0;
}