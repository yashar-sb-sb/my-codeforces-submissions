#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<conio.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

char s[51],t[51];
int i=0,j=0;
int main()
{
	cin>>s>>t;
	while(t[j])
	{
		if(s[i]==t[j++])++i;
	}
	cout<<++i;
	return 0;
}