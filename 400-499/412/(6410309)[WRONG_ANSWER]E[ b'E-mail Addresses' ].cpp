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
	string s;
	int n,l=0,r=0,a1=-1,a2=-1,a3=-1;
	long long sum = 0;
	cin>>s;
	n = s.size();
	for(int i = 0; i < n; ++i)
	{
		if(s[i] == '@')
		{
			a1 = a2;
			a2 = a3;
			a3 = i;
			if(a1 != a2)
			{
				l = 0;
				int j;
				for(j = a1 + 1; j < a2; ++j)
				{
					if(islower(s[j]))++l;
					else if(s[j] == '.')l=0;
				}
				r = 0;
				for(j = a2 + 1; j < a3&&s[j]!='.'; ++j);
				for(++j; j < a3; ++j)
				{
					if(islower(s[j]))++r;
					else break;
				}
				sum += l * r;
			}
		}
	}
	
			a1 = a2;
			a2 = a3;
			a3 = n;
				l = 0;
				int j;
				for(j = a1 + 1; j < a2; ++j)
				{
					if(islower(s[j]))++l;
					else if(s[j] == '.')l=0;
				}
				r = 0;
				for(j = a2 + 1; j < a3&&s[j]!='.'; ++j);
				for(++j; j < a3; ++j)
				{
					if(islower(s[j]))++r;
					else break;
				}
				sum += l * r;
	cout<<sum;
	return 0;
}