#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char S[300002];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m>>(S+1);
    int count = 0;
    int sum = 0;
    for(int i = 0; i <= n+1; ++i)
    {
        if(S[i] == '.')
            ++count;
        else
        {
            sum += max(0, count - 1);
            count = 0;
        }
    }
    int x;
    char c;
    for(int i = 0; i < m; ++i)
    {
        cin>>x>>c;
        if(S[x] == c || (S[x] != '.' && c != '.'))
        {
            cout<<sum<<'\n';
            continue;
        }
        if(c == '.')
        {
            S[x] = '.';
            sum += (S[x-1] == '.') + (S[x+1] == '.');
        }
        else
        {
            S[x] = c;
            sum -= (S[x-1] == '.') + (S[x+1] == '.');
        }
        cout<<sum<<'\n';
    }
    return 0;
}
