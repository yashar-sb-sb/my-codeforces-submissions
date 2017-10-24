#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, f, k, l;
    LL all = 0;
    cin>>n>>f;
    vector<int> v;
    for(int i = 0; i < n; ++i)
    {
        cin>>k>>l;
        all += min(k, l);
        v.push_back(min(2*k,l) - min(k,l));
    }
    sort(v.begin(), v.end());
    for(int i = n-f; i < n; ++i)
        all += v[i];
    cout<<all<<endl;
    return 0;
}
