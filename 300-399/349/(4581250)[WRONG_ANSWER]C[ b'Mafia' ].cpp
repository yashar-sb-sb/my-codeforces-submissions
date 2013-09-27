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
	int n;
	uLL s=0,A[100000],m;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	sort(A,A+n);
	m = A[n-1];
	for(int i = 0; i < n; ++i)
	{
		if(s == m)
		{
			cout<<s;
			return 0;
		}
		if(i==0)
		{
			while(A[0]<=A[1]&&m!=s)
			{
				++s;
				++A[0];
				if(A[0]>m)m=A[0];
			}
		}
		else if(i==n-1)
		{
			++A[n-1];
			if(A[n-1]>m)m=A[n-1];
			++s;
			i=-1;
		}
		else
		{
			if(A[i]==A[0])
			{
				i = -1;
			}
			else
			{
				while(A[i]<=A[i+1]&&m!=s)
				{
					++s;
					++A[i];
					if(A[i]>m)m=A[i];
				}
			}
		}
	}
	return 0;
}