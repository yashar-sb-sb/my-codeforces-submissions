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
ios_base::sync_with_stdio(0);//bear
	int n,l=0,r=0,s=0,p=0;
	string str;
	cin>>str;
	n = str.size();
	for(int i = 0; i < n; ++i)
	{
		switch(str[i])
		{
			case 'b':
			p = 1;
			break;
			case 'e':
			if(p==1)p=2;
			else p=0;
			break;
			case 'a':
			if(p==2)p=3;
			else p=0;
			break;
			case 'r':
			if(p==3)
			{
				s+=(i-2-l)*(n-i);
				l = i-2;
			}
			p=0;
			break;
			default:
			p=0;
			break;
		}
	}
	cout<<s;
	return 0;
}