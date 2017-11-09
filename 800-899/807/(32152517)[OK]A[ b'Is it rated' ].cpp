#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int mi = 1e9;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    bool f = false;
    for(int i = 0; i < n; ++i)
    {
        int a, b;
        cin>>a>>b;
        if(a!=b)
            return cout<<"rated"<<endl, 0;
        if(a > mi)
            f = true;
        mi = min(a, mi);
    }
    cout<<(f ? "unrated" : "maybe")<<endl;
    return 0;
}
