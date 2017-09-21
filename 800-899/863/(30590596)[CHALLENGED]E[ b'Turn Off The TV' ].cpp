#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<vector<int>> v;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 1; i <= n; ++i)
    {
        int l, r;
        cin>>l>>r;
        v.push_back({l,-1,i,r});
        v.push_back({r+1,1,i,l});
    }
    sort(v.begin(), v.end());
    int rec = -2, sum = 0;
    for(auto cur:v)
    {
        if(cur[1]>0 && rec < cur[3])
            return cout<<cur[2]<<endl, 0;
        sum -= cur[1];
        if(sum < 2)
            rec = cur[0];
        else
            rec = min(cur[0]-1, rec);
    }
    cout<<-1<<endl;
    return 0;
}
