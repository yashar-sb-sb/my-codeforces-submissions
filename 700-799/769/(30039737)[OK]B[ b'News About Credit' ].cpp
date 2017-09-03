#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, s = 0;
    cin>>n;
    pii A[n];
    for(int i = 0; i < n; ++i)
    {
        cin>>A[i].first;
        A[i].second = i+1;
        s += A[i].first;
    }
    sort(A+1, A+n, greater<pii>());

    if(!A[0].first || s<n-1)
        return cout<<-1<<endl, 0;

    s = 1;
    cout<<n-1<<'\n';
    for(int i = 0; i < n; ++i)
    {
        while(A[i].first && s<n)
        {
            cout<<A[i].second<<' '<<A[s++].second<<'\n';
            --A[i].first;
        }
    }
    return 0;
}
