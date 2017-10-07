#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    int o = 0;
    for(int i = 0; i < n; ++i)
    {
        int inp;
        cin>>inp;
        o += inp & 1;
    }
    if(o)
        return cout<<"First"<<endl, 0;
    cout<<"Second"<<endl;
    return 0;
}
