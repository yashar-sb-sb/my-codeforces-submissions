#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[10];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int k, S = 0;
    char c;
    cin>>k;
    while(cin>>c)
        ++A[c-'0'],
        S += c - '0';
    int i = 0, ans = 0;
    while(S<k)
    {
        if(A[i]--)
            S += 9 - i,
            ++ans;
        else
            ++i;
    }
    cout<<ans<<endl;
    return 0;
}
