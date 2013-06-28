#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    char C[101];
    long long a,b;
    int th=0,tv=0,A[100];
    cin>>a>>b>>C;
    int i =-1;
    while (C[++i])
    {
        switch (C[i])
        {
        case 'U':
            ++tv;
            break;
        case 'D':
            --tv;
            break;
        case 'L':
            --th;
            break;
        case 'R':
            ++th;
            break;
        default:
            break;
        }
    }
    int l = i;
    long long tah = th == 0?0:a/th;
    long long tbv = tv == 0?0:b/tv;
    long long ta,tb;
    tah -= 400;
    tbv -= 400;
    if (tah < 0)
    {
        tah = 0;
    }
    if (tbv < 0)
    {
        tbv = 0;
    }
    if (tah<tbv)
    {
        tah = tbv;
    }
    ta = tah * th;
    tb = tah * tv;
    for (int j = 0; j < 90010; j++)
    {
        if (ta == a && tb == b)
        {
            cout<<"Yes";
            return 0;
        }
        switch (C[j%l])
        {
        case 'U':
            ++tb;
            break;
        case 'D':
            --tb;
            break;
        case 'L':
            --ta;
            break;
        case 'R':
            ++ta;
            break;
        default:
            break;
        }
    }
        if (ta == a && tb == b)
        {
            cout<<"Yes";
            return 0;
        }
    cout<<"No";
    return 0;
}