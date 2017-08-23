#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[200];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < 2*n; ++i)
        cin>>A[i];
    sort(A,A+2*n);
    cout<<(A[n-1]<A[n] ? "YES" : "NO")<<endl;
    return 0;
}
