#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool O[1001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    vector<int> ans;
    for(int i = 2; i <= n; ++i)
    {
        if(!O[i])
        {
            for(int j = i; j <= n; j+=i)
                O[j] = true;
            for(int j = i; j <= n; j*=i)
                ans.push_back(j);
        }
    }
    cout<<ans.size()<<'\n';
    for(int i:ans)
        cout<<i<<' ';
    cout<<endl;
    return 0;
}
