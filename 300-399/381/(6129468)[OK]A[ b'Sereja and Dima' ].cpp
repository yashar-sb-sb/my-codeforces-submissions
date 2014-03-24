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

int main()
{
ios_base::sync_with_stdio(0);
	int n,p1=0,p2=0,A[1000],i,j;
	cin>>n;
	i = 0;
	j = n-1;
	while(n--)
	{
		cin>>A[j-n];
	}
	while(i<=j)
	{
		if(A[i]<A[j])
		{
			p1+=A[j--];
		}
		else
		{
			p1+=A[i++];
		}
		if(i<=j)
		{
			if(A[i]<A[j])
			{
				p2+=A[j--];
			}
			else
			{
				p2+=A[i++];
			}
		}
	}
	cout<<p1<<' '<<p2;
	return 0;
}