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
	int n,m[6]={12,6,4,3,2,1};
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		bitset<6> bs;
		for(int i = 0; i < 6; ++i)
		{
			
			for(int j = 0; j < m[i]; ++j)
			{
				bs.set(i);
				for(int k = 0; k < 12/m[i]; ++k)
				{
					if(s[j+k*m[i]]=='O'){bs.reset(i);break;}
				}
				if(bs[i])break;
			}
		}
		cout<<bs.count();
		for(int i = 0; i < 6; ++i)if(bs[i])cout<<' '<<12/m[i]<<'x'<<m[i];
		cout<<'\n';
	}
	return 0;
}