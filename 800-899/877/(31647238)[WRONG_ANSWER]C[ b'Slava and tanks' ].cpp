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
    vector<int> ans;
    cin>>n;
    for(int i = 1; i <= n; ++i)
    {
        if(i!=n)ans.push_back(i+1);
        ans.push_back(i);
    }
    if(n>2)
        ans.pop_back();
    cout<<ans.size()<<endl;
    for(int i:ans)
        cout<<i<<' ';
    cout<<endl;
    return 0;
}
