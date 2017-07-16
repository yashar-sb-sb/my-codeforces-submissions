#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[1000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin>>n>>k;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    sort(A, A+n);
    int ans = 0;
    for(int i = 0; i < n; ++i)
    {
        if(k*2>=A[i])
        {
            k = max(A[i], k);
            continue;
        }
        while(k*2<A[i])
        {
            k *= 2;
            ++ans;
        }
        k = max(k, A[i]);
    }
    cout<<ans<<endl;
    return 0;
}
