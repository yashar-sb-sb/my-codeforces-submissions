#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[6], B[6];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, inp;
    bool f = false;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        cin>>inp;
        ++A[inp];
    }
    for(int i = 0; i < n; ++i)
    {
        cin>>inp;
        ++B[inp];
    }
    inp = 0;
    for(int i = 0; i < 6; ++i)
    {
        if((A[i] + B[i])&1)
            f = true;
        inp += abs(A[i]-B[i]);
    }
    if(inp % 4 || f)
        cout<<-1;
    else
        cout<<inp/4;
    cout<<endl;
    return 0;
}
