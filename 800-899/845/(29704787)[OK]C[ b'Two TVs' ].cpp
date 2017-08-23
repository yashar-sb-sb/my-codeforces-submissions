#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

pii A[400000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, l, r;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        cin>>l>>r;
        A[2*i] = pii(l,-1);
        A[2*i+1] = pii(r,1);
    }
    sort(A, A+2*n);
    int cur = 0;
    for(int i = 0; i < 2*n; ++i)
    {
        cur -= A[i].second;
        if(cur==3)
            return cout<<"NO"<<endl, 0;
    }
    cout<<"YES"<<endl;
    return 0;
}
