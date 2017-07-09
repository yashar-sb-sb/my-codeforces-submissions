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
    for(int i = 0; i < n - i -1; i += 2)
        swap(A[i], A[n-i-1]);
    for(int i = 0; i < n; ++i)
        cout<<A[i]<<' ';
    cout<<endl;
    return 0;
}
