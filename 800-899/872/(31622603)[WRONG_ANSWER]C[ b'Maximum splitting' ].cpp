#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[4] = {0, -1, 0, -1};

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    while(n--)
    {
        int inp;
        cin>>inp;
        int ans = inp/4+A[inp%4];
        if(ans <= 0)
            ans = -1;
        cout<<ans<<endl;
    }
    return 0;
}
