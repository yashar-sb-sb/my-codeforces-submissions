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
#include<set>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[500][500];

string s;

int main()
{
ios_base::sync_with_stdio(0);
	int x,y,x0,y0,cx,cy,c=0,su=0,t=0;
	cin>>x>>y>>x0>>y0;
	--x0;--y0;
	cx = x0;
	cy = y0;
	cin>>s;
	cout<<1;
	for(int i = 0; i < s.size(); ++i)
	{
		switch(s[i])
		{
			case 'U':
				cx = max(0,cx-1);
			break;
			case 'D':
				cx = min(x-1,cx+1);
			break;
			case 'R':
				cy = min(y-1,cy+1);
			break;
			case 'L':
				cy = max(0,cy-1);
			break;
		}
		++c;
		if(!A[cx][cy]){A[cx][cy] = c;if(i<s.size()-1)cout<<" 1";else t = 1; ++su;}
		else if(i<s.size()-1)cout<<" 0";
	}
	cout<<' '<<x*y-su-1+t;
	return 0;
}
