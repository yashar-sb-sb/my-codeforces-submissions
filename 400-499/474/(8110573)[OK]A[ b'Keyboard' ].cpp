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

string A[3];

int main()
{
ios_base::sync_with_stdio(0);
	A[0] = "qwertyuiop";
	A[1] = "asdfghjkl;";
	A[2] = "zxcvbnm,./";
	char d;
	string s;
	cin>>d>>s;
	if(d=='L')
	{
		for(int k = 0; k < s.size(); ++k)
		{
			for(int i = 0; i < 3; ++i)
			{
				for(int j = 0; j < 10; ++j)
				{
					if(A[i][j] == s[k])
					{
						cout<<A[i][j+1];
					}
				}
			}
		}
	}
	else
	{
		for(int k = 0; k < s.size(); ++k)
		{
			for(int i = 0; i < 3; ++i)
			{
				for(int j = 0; j < 10; ++j)
				{
					if(A[i][j] == s[k])
					{
						cout<<A[i][j-1];
					}
				}
			}
		}
	}
	cin>>s;
	return 0;
}