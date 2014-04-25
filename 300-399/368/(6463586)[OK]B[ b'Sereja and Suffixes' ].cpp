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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;
int A[100000];
int main()
{
ios_base::sync_with_stdio(0);
	map<int,bool> ma;
	int n,m;
	cin>>n>>m;
	for(int i = 0; i < n; ++i)cin>>A[i];
	ma[A[n-1]]=true;
	A[n-1]=1;
	for(int i = n-2; i > -1; --i)
	{
		if(ma[A[i]])A[i]=A[i+1];
		else ma[A[i]]=true,A[i] = A[i+1]+1;
	}
	while(cin>>m)
	{
		cout<<A[m-1]<<'\n';
	}
	return 0;
}