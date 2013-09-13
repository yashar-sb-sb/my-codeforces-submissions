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
	int n,A[21],inp;
	fill(A,A+21,0);
	uLL s=0;
	cin>>n;
	while(n--)
	{
		cin>>inp;
		s+=A[10-inp];
		++A[10+inp];
	}
	cout<<s;
	return 0;
}