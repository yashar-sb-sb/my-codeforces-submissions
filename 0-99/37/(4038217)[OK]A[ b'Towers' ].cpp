#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	int n,i,l=0,c=0,A[1001] = {};
	cin>>n;
	while(n--)
	{
		cin>>i;
		if(!A[i])++c;
		++A[i];
		if(A[i]>l)++l;
	}
	cout<<l<<' '<<c;
	return 0;
}