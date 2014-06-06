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

struct tn
{
	tn()
	{
		c=0;
		l=0;
		r=0;
	}
	int c;
	struct tn * l;
	struct tn * r;
} ro;

void prf(struct tn *roo)
{
	if(roo)
	{
		prf(roo->l);
		cout<<roo->c<<'\n';
		prf(roo->r);
	}
}

int main()
{
ios_base::sync_with_stdio(0);
	string s;
	cin>>s;
	int l = s.size()-1;
	ro.c=1;
	struct tn *cur=&ro;
	for(int i = 0; i < l; ++i)
	{
		if(s[i]=='l')
		{
			cur->l=new struct tn;
			cur = cur->l;
		}
		else
		{
			cur->r=new struct tn;
			cur = cur->r;
		}
		cur->c=i+2;
	}
	prf(&ro);
	return 0;
}