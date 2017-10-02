#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int M[1000001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, A;
    cin>>n>>A;
    int B;
    cin>>B;
    if(B == A)
        return cout<<-1<<endl, 0;
    int ma = 1;
    ++M[B];
    for(int i = 1; i < n; ++i)
    {
        int inp;
        cin>>inp;
        ma = max(++M[inp], ma);
        if(ma > M[B])
            return cout<<-1<<endl, 0;
    }
    cout<<B<<endl;
    return 0;
}
