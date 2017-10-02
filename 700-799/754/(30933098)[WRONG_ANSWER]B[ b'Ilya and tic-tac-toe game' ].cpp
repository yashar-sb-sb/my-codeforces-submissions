#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char A[9][9];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    for(int i = 0; i < 4; ++i)
        cin>>A[i];
    for(int i = 0; i < 4; ++i)
        for(int j = 0; j < 4; ++j)
        {
            {
                int x = 0;
                int d = 0;
                for(int k = 0; k < 3; ++k)
                {
                    x += A[i+k][j+k] == 'x';
                    d += A[i+k][j+k] == '.';
                }
                if(x == 2 && d)
                    return cout<<"YES"<<endl, 0;
            }
            {
                int x = 0;
                int d = 0;
                for(int k = 0; k < 3; ++k)
                {
                    x += A[i+k][j] == 'x';
                    d += A[i+k][j] == '.';
                }
                if(x == 2 && d)
                    return cout<<"YES"<<endl, 0;
            }
            {
                int x = 0;
                int d = 0;
                for(int k = 0; k < 3; ++k)
                {
                    x += A[i][j+k] == 'x';
                    d += A[i][j+k] == '.';
                }
                if(x == 2 && d)
                    return cout<<"YES"<<endl, 0;
            }
        }
    cout<<"NO"<<endl;
    return 0;
}
