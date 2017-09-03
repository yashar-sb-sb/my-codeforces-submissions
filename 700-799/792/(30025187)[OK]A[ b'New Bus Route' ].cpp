#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[200000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    sort(A, A+n);
    int c = 1, ans = A[1]-A[0];
    for(int i = 2; i < n; ++i)
    {
        if(ans>A[i]-A[i-1])
        {
            c = 1;
            ans = A[i] - A[i-1];
        }
        else if(ans == A[i]-A[i-1])
            ++c;
    }
    cout<<ans<<' '<<c<<endl;
    return 0;
}
