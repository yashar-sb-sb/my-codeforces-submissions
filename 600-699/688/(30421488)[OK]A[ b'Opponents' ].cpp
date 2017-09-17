#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string A[100];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i = 0; i < m; ++i)
        cin>>A[i];
    int ans = 0, c = 0;
    for(int i = 0; i < m; ++i)
    {
        bool f = A[i].find('0') != string::npos;
        if(f)
            ++c;
        else
            c = 0;
        ans = max(ans, c);
    }
    cout<<ans<<endl;
    return 0;
}
