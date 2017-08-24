#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL A[200001];
ldb Real[200001];
ldb approx[200001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, T;
    ldb c;
    cin>>n>>T>>c;
    for(int i = 1; i <= n; ++i)
        cin>>A[i];
    for(int i = 1; i <= n; ++i)
    {
        approx[i] = (approx[i-1] + A[i]/ldb(T))/c;
        A[i] += A[i-1];
    }
    for(int i = T; i <= n; ++i)
        Real[i] = (A[i]-A[i-T])/ldb(T);
    int q;
    cin>>q;
    cout.precision(6);
    cout.setf(ios::fixed);
    while(q--)
    {
        cin>>n;
        cout<<Real[n]<<' '<<approx[n]<<' '<<abs(approx[n]-Real[n])/Real[n]<<'\n';
    }
    return 0;
}
