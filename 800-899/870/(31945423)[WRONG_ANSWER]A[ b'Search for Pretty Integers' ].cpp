#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[10];
int B[10];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m, inp;
    cin>>n>>m;
    for(int i = 0; i < n; ++i)
        ++A[cin>>inp, inp];
    for(int i = 0; i < n; ++i)
        ++B[cin>>inp, inp];
    for(int i = 0; i < 10; ++i)
        if(A[i] && B[i])
            return cout<<i<<endl, 0;
    int a, b;
    for(int i = 0; i < 10; ++i)
        if(A[i])
        {
            a = i;
            break;
        }
    for(int i = 0; i < 10; ++i)
        if(B[i])
        {
            b = i;
            break;
        }
    cout<<min(a, b)<<max(a, b)<<endl;
    return 0;
}
