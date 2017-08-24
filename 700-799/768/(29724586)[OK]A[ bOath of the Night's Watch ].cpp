#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100000];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    sort(A, A+n);
    int l = 0, r = n-1;
    while(l<=r && A[l]==A[0])++l;
    while(l<=r && A[r]==A[n-1])--r;
    cout<<r-l+1<<endl;
    return 0;
}
