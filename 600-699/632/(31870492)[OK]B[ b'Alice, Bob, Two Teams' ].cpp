#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL P[int(5e5+1)];
LL A[int(5e5+1)];
LL B[int(5e5+1)];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 1; i <= n; ++i)
        cin>>P[i];
    char c;
    for(int i = 1; i <= n; ++i)
    {
        cin>>c;
        if(c == 'A')
            A[i] = P[i];
        else
            B[i] = P[i];
        A[i] += A[i-1];
        B[i] += B[i-1];
    }
    LL ans = B[n];
    for(int i = 0; i <= n; ++i)
    {
        ans = max(ans, A[i] + B[n] - B[i]);
        ans = max(ans, B[i] + A[n] - A[i]);
    }
    cout<<ans<<endl;
    return 0;
}
