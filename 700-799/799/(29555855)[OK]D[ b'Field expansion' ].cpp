#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100001];
LL h, w;
int a, b, n;
int ans;
void f(int ind = 0, int cur = 0)
{
    if(min(h,w) >= a && max(h,w) >= b)
        ans = min(ind, ans);
    if(!A[ind])
        return;
    if(cur == 0)
    {
        if(w < b)
            f(ind, 1);
        if(h < b)
        {
            h *= A[ind];
            f(ind+1, 0);
            h /= A[ind];
        }
    }
    else
    {
        LL save = w;
        if(w < b)
            w *= A[ind];
        if(A[ind] != A[ind + 1])
            f(ind+1, 0);
        else
            f(ind+1, 1);
        w = save;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>a>>b>>h>>w>>n;
    if(a > b)
        swap(a,b);
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    ans = n + 1;
    sort(A, A+n, greater<int>());
    f();
    if(ans == n+1)
        ans = -1;
    cout<<ans<<endl;
    return 0;
}
