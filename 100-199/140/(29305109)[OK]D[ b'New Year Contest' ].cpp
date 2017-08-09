#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    sort(A, A+n);
    int cur = 10;
    int ans = 0, pen = 0;
    for(int i = 0; i < n; ++i)
    {
        cur += A[i];
        if(cur > 720)
            break;
        ++ans;
        pen += max(0, cur - 360);
    }
    cout<<ans << ' '<<pen<<endl;
    return 0;
}
