#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

#define ma 19

struct node
{
    node *l=0, *r=0;
    int n = 0, lazy = 0;
}*root = new node();


void shift(node * nod, int mask)
{
    if(!nod)
        return;
    if(nod->lazy & mask)
        swap(nod->l, nod->r);
    if(nod->l)
        nod->l->lazy ^= nod->lazy;
    if(nod->r)
        nod->r->lazy ^= nod->lazy;
    nod->lazy = 0;
}


void add(int num, node * nod = root, int mask = 1<<ma)
{
    ++nod->n;
    if(!mask)
        return;
    if(num&mask)
    {
        if(!nod->r)
            nod->r = new node();
        add(num, nod->r, mask>>1);
    }
    else
    {
        if(!nod->l)
            nod->l = new node();
        add(num, nod->l, mask>>1);
    }
}

int query(node * nod = root, int mask = 1<<ma)
{
    shift(nod, mask);
    if(!nod || !nod->l)
        return 0;
    if(nod->l->n<mask)
    {
        return query(nod->l, mask>>1);
    }
    return mask + query(nod->r, mask>>1);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,m,a;
    cin>>n>>m;
    for(int i = 0; i < n; ++i)
    {
        cin>>a;
        add(a);
    }
    while(m--)
    {
        cin>>a;
        root->lazy ^= a;
        cout<<query()<<'\n';
    }
    return 0;
}
