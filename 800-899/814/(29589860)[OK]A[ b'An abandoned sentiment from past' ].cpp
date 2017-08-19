#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;


int A[100];
int B[100];


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin>>n>>k;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    for(int i = 0; i < k; ++i)
        cin>>B[i];
    sort(B, B+k);
    for(int i = 0; i < n; ++i)
        if(!A[i])
            A[i] = B[--k];
    for(int i = 1; i < n; ++i)
        if(A[i]<A[i-1])
            return cout<<"Yes\n", 0;
    cout<<"No\n";
    return 0;
}
