#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

multiset<int> M;
int W[200000];
int H[200000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    LL S = 0;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        cin>>W[i]>>H[i];
        M.insert(H[i]);
        S += W[i];
    }
    for(int i = 0; i < n; ++i)
    {
        M.erase(M.find(H[i]));
        cout<<(S-W[i])**M.rbegin()<<' ';
        M.insert(H[i]);
    }
    cout<<endl;
    return 0;
}
