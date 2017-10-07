#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char C[100][100];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin>>C[i][j];
    if(n%3 == 0)
    {
        set<char> se;
        bool f = true;
        for(int t = 0; t < 3; ++t)
        {
            se.insert(C[t*n/3][0]);
            for(int i = 0; i < n/3; ++i)
            {
                for(int j = 0; j < m; ++j)
                {
                    if(C[t*n/3+i][j] != C[t*n/3][0])
                        f = false;
                }
            }
        }
        if(f && se.size() == 3)
            return cout<<"YES"<<endl, 0;
    }
    if(m%3 == 0)
    {
        set<char> se;
        bool f = true;
        for(int t = 0; t < 3; ++t)
        {
            se.insert(C[0][t*m/3]);
            for(int i = 0; i < m/3; ++i)
            {
                for(int j = 0; j < n; ++j)
                {
                    if(C[j][i+t*m/3] != C[0][t*m/3])
                        f = false;
                }
            }
        }
        if(f && se.size() == 3)
            return cout<<"YES"<<endl, 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
