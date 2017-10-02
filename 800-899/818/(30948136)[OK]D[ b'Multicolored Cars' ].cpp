#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int M[1000001];
set<int> S[1000001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, A;
    cin>>n>>A;
    for(int i = 1; i < 1000001; ++i)
        S[0].insert(i);
    S[0].erase(A);
    for(int i = 0; i < n; ++i)
    {
        int inp;
        cin>>inp;
        if(inp != A && M[inp] >= M[A])
        {
            S[M[inp]].erase(inp);
            S[++M[inp]].insert(inp);
        }
        else if(inp == A)
            ++M[A];
        if(M[A])
            S[M[A]-1].clear();
    }
    for(int i = 0; i < 1000001; ++i)
        if(!S[i].empty())
            return cout<<*S[i].begin()<<endl, 0;
    cout<<-1<<endl;
    return 0;
}
