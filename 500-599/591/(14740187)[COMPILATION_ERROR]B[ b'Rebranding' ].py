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
#include<list>
#include<set>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[26],B[26];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m;
	char a,b;
	string s;
	cin>>n>>m;
	cin>>s;
	for(int i = 0; i < 26; ++i)A[i] = i;
	while(m--)
	{
		cin>>a>>b;
		swap(A[a-'a'],A[b-'a']);
	}
	for(int i = 0; i < 26; ++i)
	{
		B[A[i]] = i;
	}
	for(int i = 0; i < n; ++i)cout<<(char)(B[s[i]-'a']+'a');
	return 0;
}
