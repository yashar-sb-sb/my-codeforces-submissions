#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool ones(vector<int> &v)
{
    int c = 2;
    for(int i = 0; i < int(v.size()); ++i)
        c -= v[i] != i+1;
    return c == 2 || c == 0;
}

bool all(vector<vector<int>> &vs)
{
    for(auto i:vs)
        if(!ones(i))
            return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<vector<int>> nums;
    int inp;
    for(int i = 0; i < n; ++i)
    {
        vector<int> v;
        for(int j = 0; j < m; ++j)
        {
            cin>>inp;
            v.push_back(inp);
        }
        nums.push_back(v);
    }
    for(int i = 0; i < m; ++i)
    {
        for(int j = i + 1; j < m; ++j)
        {
            for(int k = 0; k < n; ++k)
                swap(nums[k][i], nums[k][j]);
            if(all(nums))
                return cout<<"YES"<<endl, 0;
            for(int k = 0; k < n; ++k)
                swap(nums[k][i], nums[k][j]);
        }
    }
    if(all(nums))
        return cout<<"YES"<<endl, 0;
    cout<<"NO"<<endl;
    return 0;
}
