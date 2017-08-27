#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100000];
set<int> se;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    LL sum = 0;
    for(int i = 0; i < n; ++i)
    {
        cin>>A[i];
        sum += A[i];
    }

    if(sum&1)
        return cout<<"NO"<<endl, 0;

    LL suml = 0;
    se.insert(0);
    for(int i = 0; i < n; ++i)
    {
        se.insert(A[i]);
        suml += A[i];
        se.insert(A[i]);
        if(se.count((suml*2 - sum)/2))
            return cout<<"YES"<<endl, 0;
    }

    reverse(A, A+n);

    suml = 0;
    se.clear();
    for(int i = 0; i < n; ++i)
    {
        se.insert(A[i]);
        suml += A[i];
        se.insert(A[i]);
        if(se.count((suml*2 - sum)/2))
            return cout<<"YES"<<endl, 0;
    }

    cout<<"NO"<<endl;

    return 0;
}
