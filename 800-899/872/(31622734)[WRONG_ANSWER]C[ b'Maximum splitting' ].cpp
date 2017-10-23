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
    memset(A, -1, sizeof(A));
    for(int i = 2; i < 500; ++i)
    {
        if(A[i] == -1)
        for(int j = i*i; j < 500; j += i)
            A[j] = 1;
    }
    for(int i = 8; i < 500; ++i)
        for(int j = 1; j < i; ++j)
            A[i] = max(A[i], A[j] + A[i-j]);
    int n;
    cin>>n;
    while(n--)
    {
        int inp;
        cin>>inp;
        int ans = -1;
        for(int i = inp % 4; i <= inp && i < 500; ++i)
            if(A[i]>0)
                ans = max(ans, (inp-i)/4 + A[i]);
        cout<<ans<<endl;
    }
    return 0;
}
