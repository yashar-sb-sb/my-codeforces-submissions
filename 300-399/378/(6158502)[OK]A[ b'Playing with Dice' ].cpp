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
	int i=7,a,b,aw=0,bw=0,dw=0,t;
	cin>>a>>b;
	if(a>b)
	{
		aw = 7 - a;
		bw = b;
		t = a - b -1;
		aw+=t/2;
		bw+=t/2;
		dw=t%2;
	}
	else if(b>a)
	{
		bw = 7 - b;
		aw = a;
		t = b - a -1;
		bw+=t/2;
		aw+=t/2;
		dw=t%2;
	}
	else
	{
		dw = 6;
	}
	/*while(--i)
	{
		t = abs(i-a)-abs(i-b);
		if(t<0)
		{
			++aw;
		}
		else if(t>0)
		{
			++bw;
		}
		else
		{
			++dw;
		}
	}*/
	cout<<aw<<' '<<dw<<' '<<bw;
	return 0;
}