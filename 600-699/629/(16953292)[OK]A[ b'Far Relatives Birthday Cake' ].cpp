#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100], B[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	char c;
	cin>> n;
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < n; ++j)
		{
			cin>>c;
			if(c == 'C')
			{
				++A[i];
				++B[j];
			}
		}
	int s = 0;
	for(int i = 0; i < 100; ++i)
		s += A[i] * (A[i]-1) / 2 + B[i] * (B[i]-1) / 2;
	cout<<s;
	return 0;
}
