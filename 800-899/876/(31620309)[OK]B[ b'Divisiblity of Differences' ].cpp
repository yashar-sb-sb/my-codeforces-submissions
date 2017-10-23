#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    unordered_map<int, vector<int>> ma;
    int n, k, m;
    cin>>n>>k>>m;
    for(int i = 0; i < n; ++i)
    {
        int inp;
        cin>>inp;
        ma[inp%m].push_back(inp);
        if(int(ma[inp%m].size()) == k)
        {
            cout<<"Yes"<<endl;
            for(int i: ma[inp%m])
                cout<<i<<' ';
            cout<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}
