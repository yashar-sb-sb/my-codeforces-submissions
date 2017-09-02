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
    {
        cin>>A[i];
        if(A[i])
            A[i] = 1e9;
    }
    for(int i = 1; i < n; ++i)
        A[i] = min(A[i-1]+1, A[i]);
    for(int i = n-2; i >= 0; --i)
        A[i] = min(A[i+1]+1, A[i]);
    for(int i = 0; i < n; ++i)
        cout<<A[i]<<' ';
    cout<<endl;
    return 0;
}
