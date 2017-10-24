#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int Y[2000001];
int X[2000001];
int x[2000];
int y[2000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    int ans = 0;
    for(int i = 0; i < n; ++i)
    {
        cin>>x[i];
        X[x[i]] = 1;
    }
    for(int i = 0; i < n; ++i)
    {
        cin>>y[i];
        Y[y[i]] = 1;
    }
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            ans += Y[x[i] ^ y[j]] | X[x[i] ^ y[j]];
    cout<<(ans & 1 ? "Koyomi" : "Karen")<<endl;
    return 0;
}
