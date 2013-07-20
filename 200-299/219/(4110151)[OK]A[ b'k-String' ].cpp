#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	string s;
	int k,A[26]={},l,t;
	cin>>k>>s;
	l = s.size();
	while(l--)++A[s[l]-'a'];
	s="";
	l = 25;
	do
	{
		if(!(A[l]%k))
		{
			t=A[l]/k;
			while(t--)s+=(char)l+'a';
		}
		else
		{
			cout<<-1;
			return 0;
		}
	}while(l--);
	while(k--)
	{
		cout<<s;
	}
	return 0;
}