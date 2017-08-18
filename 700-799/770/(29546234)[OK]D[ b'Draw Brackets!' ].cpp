#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char A[120][500];
string s;
int d = 0;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    cin>>s;
    int t = 0;
    for(char c:s)
    {
        if(c == '[')
            ++t;
        else
            --t;
        d = max(t, d);
    }
    for(int i = 0; i < d; ++i)
        A[i][0] = '|';
    A[d][0] = '+';
    A[d][1] = '-';
    int cur = 1;
    --d;
    for(auto c = next(s.begin()); c != s.end(); ++c)
    {
        if(*c == '[')
        {
            for(int i = 0; i < d; ++i)
                A[i][cur] = '|';
            A[d][cur] = '+';
            A[d][cur+1] = '-';
            --d;
        }
        else if(*c == ']')
        {
            ++d;
            if(*c == ']' && *prev(c) == '[')
                cur += 3;
            for(int i = 0; i < d; ++i)
                A[i][cur] = '|';
            A[d][cur] = '+';
            A[d][cur-1] = '-';
        }
        ++cur;
    }
    for(int i = 0; i <= d; ++i)
    {
        for(int j = 0; j < cur; ++j)
            if(!A[i][j])
                A[i][j] = ' ';
    }
    for(int i = d; i > 0; --i)
        cout<<A[i]<<'\n';
    for(int i = 0; i <= d; ++i)
        cout<<A[i]<<'\n';
    return 0;
}
