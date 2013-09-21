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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,c=0,inp,j;
	cin>>n;
	cin>>m;
	for(int i = 1; i < n; ++i)
	{
		cin>>inp;
		if(inp<m)m = inp,c=0,j = i + 1;
		else if(inp == m)++c;
	}
	if(c)cout<<"Still Rozdil";
	else cout<<j;
	return 0;
}