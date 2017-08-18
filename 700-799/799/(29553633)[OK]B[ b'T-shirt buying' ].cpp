#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

set<int> A[4];
int P[200000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, inp;
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>P[i];
    for(int i = 0; i < n; ++i)
    {
        cin>>inp;
        A[inp].insert(P[i]);
    }
    for(int i = 0; i < n; ++i)
    {
        cin>>inp;
        A[inp].insert(P[i]);
    }
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        cin>>inp;
        int cur = A[inp].size() ? *A[inp].begin() : -1;
        for(int j = 1; j < 4; ++j)
            A[j].erase(cur);
        cout<<cur << ' ';
    }
    cout<<endl;
    return 0;
}
