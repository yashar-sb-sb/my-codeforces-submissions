#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

pii A[5000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        int a, b;
        cin>>a>>b;
        A[i] = pii(a, b);
    }
    int ans = 0;
    sort(A, A+n);
    for(int i = 0; i < n; ++i)
    {
        if(A[i].second < ans)
            ans = A[i].first;
        else
            ans = A[i].second;
    }
    cout<<ans<<endl;
    return 0;
}
