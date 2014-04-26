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

int main()
{
ios_base::sync_with_stdio(0);
	int A[3];
	cin>>A[0]>>A[1];
	A[2] = A[0] + A[1];
	for(int i = 0; i < 3; ++i)
	{
		int l = A[i];
		A[i] = 0;
		int j = 1;
		while(l)
		{
			A[i]+=l%10*j;
			if(!(l%10))j*=10;
			l/=10;
		}
	}
	cout<<(A[0]+A[1]==A[2]?"YES":"NO");
	return 0;
}