#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;


int parr[100001];

int root(int v){return parr[v] < 0 ? v : (parr[v] = root(parr[v]));}
void merge(int x,int y){
    if((x = root(x)) == (y = root(y)))return;
    if(parr[y] < parr[x])
        swap(x, y);
    parr[x] += parr[y];
    parr[y] = x;
}

pii A[100001];
vector<int> seq[100001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(parr, -1, sizeof(parr));
    int n;
    cin>>n;
    for(int i = 1; i <= n; ++i)
    {
        A[i].second = i;
        cin>>A[i].first;
    }
    sort(A+1, A+n+1);
    for(int i = 1; i <= n; ++i)
        merge(i, A[i].second);
    for(int i = 1; i <= n; ++i)
        seq[root(i)].push_back(i);
    int count = 0;
    for(int i = 1; i <= n; ++i)
        count += !seq[i].empty();
    cout<<count<<'\n';
    for(int i = 1; i <= n; ++i)
        if(!seq[i].empty())
        {
            cout<<seq[i].size();
            for(int j:seq[i])
                cout<<' '<<j;
            cout<<'\n';
        }
    return 0;
}
