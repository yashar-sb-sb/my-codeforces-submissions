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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool f(pii i, pii j){return i.first>j.first||(i.first == j.first&&i.second<j.second);}

int main()
{
ios_base::sync_with_stdio(0);
	pii A[50];
	int n,k,j,ans=1;
	cin>>n>>k;
	--k;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i].first>>A[i].second;
	}
	sort(A,A+n,f);
	j = k;
	while(++k<n&&!f(A[k-1],A[k]))++ans;
	while(--j>-1&&!f(A[j],A[j+1]))++ans;
	cout<<ans;
	return 0;
}