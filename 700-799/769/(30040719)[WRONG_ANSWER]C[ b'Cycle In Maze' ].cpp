#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char M[1002][1002];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m, k, x, y;
    cin>>n>>m>>k;
    if(k&1)
        return cout<<"IMPOSSIBLE"<<endl, 0;
    for(int i = 1; i <= n; ++i)
        cin>>(M[i]+1);
    string ans = "";
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            if(M[i][j] == 'X')
            {
                x = i;
                y = j;
                break;
            }
    k /= 2;
    while(k--)
    {
        if(M[x+1][y] == '.')
        {
            ans.push_back('D');
            ++x;
        }
        else if(M[x][y-1] == '.')
        {
            ans.push_back('L');
            --y;
        }
        else if(M[x][y+1] == '.')
        {
            ans.push_back('R');
            ++y;
        }
        else if(M[x-1][y] == '.')
        {
            ans.push_back('U');
            --x;
        }
        else
            return cout<<"IMPOSSIBLE"<<endl, 0;
    }
    cout<<ans;
    for(int i = ans.size(); i >= 0; --i)
    {
        if(ans[i] == 'R')
            ans[i] = 'L';
        else if(ans[i] == 'L')
            ans[i] = 'R';
        else if(ans[i] == 'D')
            ans[i] = 'U';
        else if(ans[i] == 'U')
            ans[i] = 'D';
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;
    return 0;
}
