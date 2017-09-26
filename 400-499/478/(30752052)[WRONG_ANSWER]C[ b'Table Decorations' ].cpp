#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    vector<LL> v(3);
    cin>>v[0]>>v[1]>>v[2];
    sort(v.begin(), v.end());
    cout<<(v[0]+v[1]+min(v[0]+v[1], v[2]))/3<<endl;
    return 0;
}
