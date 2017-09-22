#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> T[100001];

ldb f(int v, int p)
{
    ldb ans = 0;
    ldb c = 0;
    for(int i :T[v])
    {
        if(i!=p)
        {
            ++c;
            ans += f(i, v);
        }
    }
    if(ans)
        return 1 + ans / c;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    int a, b;
    for(int i = 1; i < n; ++i)
    {
        cin>>a>>b;
        T[a].push_back(b);
        T[b].push_back(a);
    }
    cout.precision(15);
    cout.setf(ios::fixed);
    cout<<f(1,0)-1<<endl;
    return 0;
}
