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

int A[1000001];

int main()
{
ios_base::sync_with_stdio(0);
	int n,j=1,ma=0,mi=0,a;
	cin>>n;
	A[0]=0;
	for(int i = 1; i <= n; ++i)
	{
		cin>>a;
		for( ; a--; ++j)
		{
			A[j] = A[j-1] + (i%2?1:-1);
			if(ma<A[j])ma=A[j];
			if(mi>A[j])mi=A[j];
		}
	}
	for(int i = ma; i > mi; --i)
	{
		for(int t = 1; t < j; ++t)
		{
			if(i == A[t] && A[t-1]<A[t])cout<<"/";
			else if(i-1 == A[t] && A[t-1]>A[t])cout<<"\\";
			else cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}