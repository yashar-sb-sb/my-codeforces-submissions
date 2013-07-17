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

int main()
{
	int n,_n,k,A[50];
	cin>>n>>k;
	_n=n;
	while(_n--)cin>>A[_n];
	sort(A,A+n,greater<int>());
	if(--k<n)
		cout<<A[k]<<" 0";
	else
		cout<<-1;
	return 0;
}