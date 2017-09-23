#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[50][50];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            cin>>A[i][j];
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
        {
            bool can = A[i][j] == 1;
            for(int x = 0; x < n; ++x)
                for(int y = 0; y < n; ++y)
                    if(A[x][j] + A[i][y] == A[i][j])
                        can = true;
            if(!can)
                return cout<<"No"<<endl, 0;
        }
    cout<<"Yes"<<endl;
    return 0;
}
