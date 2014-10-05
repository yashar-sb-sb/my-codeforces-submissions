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

string A[6];
int main()
{
ios_base::sync_with_stdio(0);
	A[0]="+------------------------+\n";
	A[1]="|#.#.#.#.#.#.#.#.#.#.#.|D|)\n";
	A[2]="|#.#.#.#.#.#.#.#.#.#.#.|.|\n";
	A[3]="|#.......................|\n";
	A[4]="|#.#.#.#.#.#.#.#.#.#.#.|.|)\n";
	A[5]="+------------------------+";
	int n,i=1,j=1;
	cin>>n;
	while(n--)
	{
		while(A[i][j]!='#')
		{
			++i;
			if(i==5)++j, i = 1;
		}
		A[i][j]='O';
	}
	cout<<A[0]<<A[1]<<A[2]<<A[3]<<A[4]<<A[5];
	return 0;
}