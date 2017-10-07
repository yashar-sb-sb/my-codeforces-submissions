#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[200000];
int ans[200000];
pii B[200000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int m;
    cin>>m;
    for(int i = 0; i < m; ++i)
        cin>>A[i];
    sort(A, A+m, std::greater<int>());
    for(int i = 0; i < m; ++i)
    {
        cin>>B[i].first;
        B[i].second = i;
    }
    sort(B, B+m);
    for(int i = 0; i < m; ++i)
        ans[B[i].second] = A[i];
    for(int i = 0; i < m; ++i)
        cout<<ans[i]<<' ';
    cout<<endl;
    return 0;
}
