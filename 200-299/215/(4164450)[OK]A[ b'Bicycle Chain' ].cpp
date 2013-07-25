#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[50], B[50];

int main()
{
ios_base::sync_with_stdio(0);
	int n, m, max=0,c,t;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	cin>>m;
	for(int i = 0; i < m; ++i)cin>>B[i];
	for(int j = m - 1; j > -1; --j)
	{
		for(int i = n - 1; i > -1; --i)
		{
			if(!(B[j]%A[i]))
			{
				t = B[j]/A[i];
				if(t>max)
				{
					max = t;
					c = 1;
				}
				else if(t == max)
				{
					++c;
				}
			}
		}
	}
	cout<<c;
	return 0;
}