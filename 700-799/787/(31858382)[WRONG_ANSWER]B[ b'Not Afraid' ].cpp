#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i = 0; i < m; ++i)
    {
        set<int> se;
        int k;
        cin>>k;
        bool end = true;
        while(k--)
        {
            int a;
            cin>>a;
            if(se.count(abs(a)))
            {
                end = false;
                break;
            }
            se.insert(abs(a));
        }
        if(end)
            return cout<<"YES"<<endl, 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
