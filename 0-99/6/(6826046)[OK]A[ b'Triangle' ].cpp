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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[4];

int main()
{
ios_base::sync_with_stdio(0);
	cin>>A[0]>>A[1]>>A[2]>>A[3];
	sort(A,A+4);
	if(A[0]+A[1]>A[2] || A[1]+A[2]>A[3])cout<<"TRIANGLE";
	else if(A[0]+A[1]==A[2] || A[1]+A[2]==A[3])cout<<"SEGMENT";
	else cout<<"IMPOSSIBLE";
	return 0;
}