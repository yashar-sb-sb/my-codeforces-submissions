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

int A[1000],B[1000];
bool f(int i, int j){return A[i]<A[j]; }

int main()
{
ios_base::sync_with_stdio(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n,k;
	cin>>n>>k;
	for(int i = 0; i < n; ++i)B[i]=i, cin>>A[i];
	sort(B,B+n,f);
	cout<<A[B[n-k]]<<'\n';
	for(int i = n-k; i < n; ++i)cout<<B[i]+1<<' ';
	return 0;
}