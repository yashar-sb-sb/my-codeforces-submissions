#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[8], B[8];

int main()
{
ios_base::sync_with_stdio(0);
	int a = 0, b = 0;
	char c;
	for(int i = 0; i < 8; ++i)
		for(int j = 0; j < 8; ++j)
		{
			cin>>c;
			if(c=='B')++A[i], ++B[j];
		}
	for(int i = 0; i < 8; ++i)
	{
		if(A[i] == 8)++a;
		if(B[i] == 8)++b;
	}
	if(a == 8 && b == 8)cout<<8;
	else cout<<a+b;
	return 0;
}
