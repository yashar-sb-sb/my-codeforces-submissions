#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<pii> A[10000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 1; i <= n; ++i)
    {
        int x, y;
        cin>>x>>y;
        A[(x-1)/100].emplace_back(y, i);
    }
    for(int i = 0; i < 10000; ++i)
    {
        if(i&1)sort(A[i].begin(), A[i].end());
        else sort(A[i].begin(), A[i].end(), greater<pii>());
        for(pii j: A[i])
            cout<<j.second<<' ';
    }
    cout<<endl;
    return 0;
}
