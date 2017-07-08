#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int A[3];
    cin>>A[0]>>A[1]>>A[2];
    sort(A,A+3);
    cout<<A[2]-A[0]<<endl;
    return 0;
}
