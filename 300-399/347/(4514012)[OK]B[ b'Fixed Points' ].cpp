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
	int n,A[100000],c=0,flag=0;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	for(int i = 0; i < n; ++i)
	{
		if(A[i] == i)++c;
		else if(i == A[A[i]])++flag;
	}
	if(flag)c+=2;
	else ++c;
	if(c>n)c=n;
	cout<<c;
	return 0;
}