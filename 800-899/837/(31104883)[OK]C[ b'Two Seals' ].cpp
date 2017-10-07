#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100], B[100];
int n, a, b;

bool fits(int x, int y)
{
    return (x<=a && y<=b) || (x<=b && y<=a);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>a>>b;
    int ans = 0;
    for(int i = 0; i < n; ++i)
        cin>>A[i]>>B[i];
    for(int i = 1; i < n; ++i)
        for(int j = 0; j < i; ++j)
            if  (
                    fits(A[i]+A[j], max(B[i], B[j]))||
                    fits(B[i]+A[j], max(A[i], B[j]))||
                    fits(A[i]+B[j], max(B[i], A[j]))||
                    fits(B[i]+B[j], max(A[i], A[j]))
                )
                ans = max(ans, A[i]*B[i] + A[j]*B[j]);
    cout<<ans<<endl;
    return 0;
}
