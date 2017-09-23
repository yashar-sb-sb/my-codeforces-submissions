#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[1000001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m, k;
    cin>>n>>m>>k;
    int hole;
    for(int i = 0; i < m; ++i)
    {
        cin>>hole;
        A[hole] = 1;
    }
    int pos = 1;
    int u,v;
    for(int i = 0; i < k; ++i)
    {
        if(A[pos])
            break;
        cin>>u>>v;
        if(pos == u)
            pos = v;
        else if(pos == v)
            pos = u;
    }
    cout<<pos<<endl;
    return 0;
}
