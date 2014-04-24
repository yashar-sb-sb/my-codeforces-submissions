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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int A[26],s=0,i=26;
	char c;
	fill(A,A+26,0);
	while(cin>>c)++A[c-'a'];
	while(i--)
	{
		if(A[i]%2)++s;
	}
	cout<<(s<2||s%2?"First":"Second");
	return 0;
}