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
	int A[10];
	char c;
	fill(A+1,A+10,0);
	cin>>A[0];
	A[0]+=A[0];
	while(cin>>c)if('0'<c&&c<='9'&&++A[c-'0']>A[0]){cout<<"NO";return 0;}
	cout<<"YES";
	return 0;
}