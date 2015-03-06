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
#include<cstdio>
#include<list>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[10];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	char c;
	while(n--)
	{
		cin>>c;
		for(int i = 2; i <= c-'0'; ++i)++A[i];
	}
	A[3] += 2*A[9];
	A[9] = 0;
	A[2] += 3*A[8];
	for(int i = 2; i < 7; ++i)A[i]-=A[7];
	while(A[7]--)cout<<7;
	A[2]+=A[6];
	A[3]+=A[6];
	for(int i = 2; i < 5; ++i)A[i]-=A[5];
	while(A[5]--)cout<<5;
	A[2]+=2*A[4];
	A[2]-=A[3];
	while(A[3]--)cout<<3;
	while(A[2]--)cout<<2;
	return 0;
}
