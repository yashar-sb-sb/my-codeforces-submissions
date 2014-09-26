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

int A[6];

int main()
{
ios_base::sync_with_stdio(0);
	cin>>A[0]>>A[1]>>A[2]>>A[3]>>A[4]>>A[5];
	sort(A,A+6);
	if(A[2]==A[3])
	{
		if(A[0]!=A[1]||A[4]!=A[5])
		{
			cout<<"Bear";
		}
		else cout<<"Elephant";
	}
	else cout<<"Alien";
	return 0;
}