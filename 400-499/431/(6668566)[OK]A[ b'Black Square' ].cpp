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
int A[4];
int main()
{
ios_base::sync_with_stdio(0);
	cin>>A[0]>>A[1]>>A[2]>>A[3];
	char c;
	int s = 0;
	while(cin>>c)
	{
		s+=A[c-'1'];
	}
	cout<<s;
	return 0;
}