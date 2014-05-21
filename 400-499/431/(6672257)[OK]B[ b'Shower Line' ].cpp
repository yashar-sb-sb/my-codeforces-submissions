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

int q[5][5];
int a[5]={0,1,2,3,4};

int main()
{
ios_base::sync_with_stdio(0);
	int s,ma=0;
	for(int i = 0; i<5; ++i)
	{
		for(int j = 0; j < 5; ++j)cin>>q[i][j];
	}
	do {
		s=0;
		for(int i = 0; i < 5; ++i)
		{
			for(int j = i; j < 4; j+=2)
			{
				s+=q[a[j]][a[j+1]]+q[a[j+1]][a[j]];
			}
		}
		if(ma<s)ma = s;
	} while ( std::next_permutation(a,a+5) );
	cout<<ma;
	return 0;
}