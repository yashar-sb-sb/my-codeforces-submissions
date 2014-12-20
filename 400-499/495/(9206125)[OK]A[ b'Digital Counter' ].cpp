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

int A[10]={2,7,2,3,3,4,2,5,1,2};

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	cout<<A[n%10]*A[n/10];
	return 0;
}
