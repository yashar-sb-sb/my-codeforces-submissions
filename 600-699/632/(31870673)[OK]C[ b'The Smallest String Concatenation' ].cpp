#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string S[int(5e4)];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>S[i];
    sort(S, S+n, [](string s, string t)
            {
            return s+t < t+s;
            });
    for(int i = 0; i < n; ++i)
        cout<<S[i];
    cout<<endl;
    return 0;
}
