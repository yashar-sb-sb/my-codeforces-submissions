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

int A[26]={0};

int main()
{
ios_base::sync_with_stdio(0);
	char c;
	int s=0;
	fill(A,A+26,0);
	while(c!='}')
	{
		cin>>c;
		if(c>='a'&&c<='z')
		{
			++A[(int)c-'a'];
		}
	}
	for(int i = 0; i < 26; ++i)if(A[i])++s;
	cout<<s;
	return 0;
}