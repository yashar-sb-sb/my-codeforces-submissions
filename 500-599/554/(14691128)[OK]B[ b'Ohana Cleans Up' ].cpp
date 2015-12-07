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

struct node
{
	struct node *left,*right;
	int c;
	node()
	{
		left = right = 0;c = 0;
	}
}root;

int m = 0;

void insert(struct node *c, string &s, int l = 0)
{
	if(s.size() == l){m = max(m,c->c); return;};
	if(s[l] == '0')
	{
		if(!c->left)c->left = new struct node;
		++c->left->c;
		insert(c->left,s,l+1);
	}
	else
	{
		if(!c->right)c->right = new struct node;
		++c->right->c;
		insert(c->right,s,l+1);
	}
}

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	string s;
	cin>>n;
	while(n--){cin>>s;insert(&root,s);}
	cout<<m;
	return 0;
}
