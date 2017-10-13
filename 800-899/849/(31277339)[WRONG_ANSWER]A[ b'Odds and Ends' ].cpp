#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[101];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    if(n % 2 == 0 || A[0] % 2 == 0 || A[n-1] % 2 == 0)
        return cout<<"No"<<endl, 0;
    int l, r;
    l = 0, r = 0;
    while(r < n && (A[r] % 2 == 0 || A[r+1] % 2 == 0))
        r += 2;
    if(r >= n)
        return cout<<"No"<<endl, 0;
    l = r = r + 1;
    while(r < n && (A[r] % 2 == 0 || A[r+1] % 2 == 0))
        r += 2;
    if(r >= n)
        return cout<<"No"<<endl, 0;
    cout<<"Yes"<<endl;
    return 0;
}
