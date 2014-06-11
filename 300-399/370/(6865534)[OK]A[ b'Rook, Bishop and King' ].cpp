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
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<(a==c||b==d?1:2)<<' '<<((a+b)%2==(c+d)%2?(abs(a-c)==abs(b-d)?1:2):0)<<' '<<max(abs(a-c), abs(b-d));
	return 0;
}