#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[200001];
int R[200001];
int ma = 0;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    A[0] = ++ma;
    R[1] = 0;
    for(int i = 1; i <= n; ++i)
    {
        int inp;
        cin>>inp;
        if(R[A[inp]] == inp)
            A[i] = A[inp];
        else
            A[i] = ++ma;
        R[A[i]] = i;
    }
    cout<<ma<<endl;
    return 0;
}
