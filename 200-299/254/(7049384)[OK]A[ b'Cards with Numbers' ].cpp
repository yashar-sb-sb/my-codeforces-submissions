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

vector<int> A[5000];

int main()
{
ios_base::sync_with_stdio(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n,c=0;
	cin>>n;
	n<<=1;
	for(int i = 0,inp; i < n; ++i)
	{
		cin>>inp;
		A[inp-1].push_back(i+1);
		if(A[inp-1].size()&1)++c;
		else --c;
	}
	if(c)
	{
		cout<<-1;
		return 0;
	}
	for(int i = 0; i < 5000; ++i)
	{
		int l = A[i].size();
		while(l--)
		{
			cout<<A[i][l]<<' ';
			cout<<A[i][--l]<<'\n';
		}
	}
	return 0;
}