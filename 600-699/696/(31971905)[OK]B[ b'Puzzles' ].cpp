#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> T[100001];
ldb W[100001];
int sz[100001];

void sum(int v=1)
{
    int all = 0;
    sz[v] = 1;
    for(int i:T[v])
    {
        sum(i);
        sz[v] += sz[i];
        all += sz[i];
    }
    for(int i:T[v])
        W[i] = (all-sz[i])/ldb(2)+1;
}

void f(int v=1, ldb w=0)
{
    W[v] += w;
    for(int i:T[v])
        f(i, W[v]);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 2; i <= n; ++i)
    {
        int inp;
        T[cin>>inp, inp].push_back(i);
    }
    W[1] = 1;
    sum();
    f();
    cout.precision(12);
    for(int i = 1; i <= n; ++i)
        cout<<W[i]<<' ';
    cout<<endl;
    return 0;
}
