#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char A[int(1e6+2)];

int main()
{
ios_base::sync_with_stdio(0);
	A[0] = '0';
	cin>>A+1;
	int c = 1e6+2;
	while(!A[--c]);
	int r = 0;
	while(c>1 || A[c]=='0')
	{
		++r;
		if(A[c] == '1')
		{
			int i;
			for(i = c; A[i] == '1'; --i)A[i] = '0';
			A[i] = '1';
		}
		else --c;
	}
	cout<<r<<endl;
	return 0;
}
