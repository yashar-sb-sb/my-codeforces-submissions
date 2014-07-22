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

struct node
{
	struct node *l, *r;
};

typedef struct node Node;

Node *root = new Node();

void insert(Node *nd, unsigned int n, unsigned int mask)
{
	if(mask)
	{
		if(mask & n)
		{
			if((*nd).r)nd = (*nd).r;
			else
			{
				nd->r = new Node();
				nd = (*nd).r;
			}
		}
		else
		{
			if((*nd).l)nd = (*nd).l;
			else
			{
				nd->l = new Node();
				nd = (*nd).l;
			}
		}
		insert(nd,n,mask>>1);
	}
}

int query(Node *nd, unsigned int n, unsigned int mask)
{
	if(mask)
	{
		if(mask & n)
		{
			if((*nd).r)
			{
				nd = (*nd).r;
			}
			else
			{
				n &= ~mask;
				nd = (*nd).l;
			}
		}
		else
		{
			if((*nd).l)
			{
				nd = (*nd).l;
			}
			else
			{
				n |= mask;
				nd = (*nd).r;
			}
		}
		return query(nd,n,mask>>1);
	}
	return n;
}

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	unsigned int m=0,d=0,cur;
	cin>>n;
	insert(root,d,1<<31);
	for(int i = 1; i <= n; ++i)
	{
		cin>>cur;
		m = max(m,query(root,~d,1<<31)^d);
		d = cur ^ d;
		insert(root,d,1<<31);
	}
	m = max(m,query(root,~d,1<<31)^d);
	cout<<m;
	return 0;
}