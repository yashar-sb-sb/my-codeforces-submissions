#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL P[100000];
LL Q[100000];
LL R[100000];
LL A[100000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    LL n, p, q, r;
    cin>>n>>p>>q>>r;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    P[0] = p*A[0];
    Q[0] = P[0] + q*A[0];
    R[0] = Q[0] + r*A[0];
    for(int i = 1; i < n; ++i)
        P[i] = max(P[i-1], p*A[i]);
    for(int i = 1; i < n; ++i)
        Q[i] = max(Q[i-1], q*A[i] + P[i]);
    for(int i = 1; i < n; ++i)
        R[i] = max(R[i-1], r*A[i] + Q[i]);
    cout<<R[n-1]<<endl;
    return 0;
}
