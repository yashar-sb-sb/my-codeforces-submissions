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

int A[100000],T[100000],P[2];

int main()
{
ios_base::sync_with_stdio(0);
	int n,p=0,i;
	cin>>n;
	for(i = 0; i < n; ++i)
	{
		cin>>A[i];
		T[i]=A[i];
	}
	sort(T,T+n);
	for(i = 0; i < n; ++i)
	{
		if(A[i]!=T[i])
		{
			if(p<2)
			{
				P[p++]=i;
			}
			else
			{
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<(p&1?"NO":"YES");
}