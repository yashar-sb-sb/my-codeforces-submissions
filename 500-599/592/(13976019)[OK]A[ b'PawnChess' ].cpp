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

string C[8];

int main()
{
ios_base::sync_with_stdio(0);
	int A=10,B=10;
	for(int i = 0; i<8; ++i)cin>>C[i];
	for(int i = 0; i < 8; ++i)
	{
		for(int j = 0; j<8; ++j)
		{
			if(C[j][i]=='B')break;
			if(C[j][i]=='W')A=min(A,j);
		}
		
		for(int j = 7; j>-1; --j)
		{
			if(C[j][i]=='W')break;
			if(C[j][i]=='B')B=min(B,7-j);
		}
	}
	cout<<(A>B?'B':'A');
	return 0;
}
