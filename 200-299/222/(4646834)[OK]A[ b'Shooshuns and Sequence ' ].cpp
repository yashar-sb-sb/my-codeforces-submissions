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

int A[100000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,k,i;
	cin>>n>>k;
	--k;
	for(i = 0; i < n; ++i)cin>>A[i];
	for(i = k; i < n && A[k] == A[i]; ++i);
	if(i == n)
	{
		for(i = k; i > -1 && A[k] == A[i]; --i);
		cout<<i+1;
	}
	else
	{
		cout<<-1;
	}
	return 0;
}