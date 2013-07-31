#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	short c[4][4];
	char inp;
	for(int i = 0; i < 4; ++i)
		for(int j = 0; j < 4; ++j)
		{
			cin>>inp;
			c[i][j] = inp == '#'? 1:0;
			if(i&&j&&c[i][j]+c[i][j-1]+c[i-1][j]+c[i-1][j-1]!=2)
			{
				cout<<"YES";
				return 0;
			}
		}
	cout<<"NO";
	return 0;
}