#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[25];

bool check()
{
    for(int i = 0; i < 24; ++i)
        if(A[i+1] != A[i/4*4+1])
            return false;
    return true;
}

bool rotate(int &a, int &b, int &c, int &d, int &_1, int &_2, int &_3, int &_4, int &_5, int &_6, int &_7, int &_8)
{
    int t = a;
    a = b;
    b = c;
    c = d;
    d = t;
    int t1 = _1, t2 = _2;
    _1 = _3, _2 = _4;
    _3 = _5, _4 = _6;
    _5 = _7, _6 = _8;
    _7 = t1, _8 = t2;
    return check();
}

bool go(int &a, int &b, int &c, int &d, int &_1, int &_2, int &_3, int &_4, int &_5, int &_6, int &_7, int &_8)
{
    if(rotate( a, b, c, d, _1, _2, _3, _4, _5, _6, _7, _8))
        return true;
    rotate( a, b, c, d, _1, _2, _3, _4, _5, _6, _7, _8);
    if(rotate( a, b, c, d, _1, _2, _3, _4, _5, _6, _7, _8))
        return true;
    rotate( a, b, c, d, _1, _2, _3, _4, _5, _6, _7, _8);
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    for(int i = 1; i <= 24; ++i)
        cin>>A[i];
    if(go(A[5], A[6], A[8], A[7],
                A[3], A[4], A[17], A[19], A[10], A[9], A[16], A[14]))
        cout<<"YES"<<endl;
    else if(go(A[17], A[18], A[20], A[19],
                A[4], A[2], A[21], A[23], A[12], A[10], A[8], A[6]))
        cout<<"YES"<<endl;
    else if(go(A[9], A[10], A[12], A[11],
                A[7], A[8], A[19], A[20], A[23], A[24], A[15], A[16]))
        cout<<"YES"<<endl;
    else if(go(A[13], A[14], A[16], A[15],
                A[1], A[3], A[5], A[7], A[9], A[11], A[24], A[22]))
        cout<<"YES"<<endl;
    else if(go(A[1], A[2], A[4], A[3],
                A[22], A[21], A[18], A[17], A[6], A[5], A[14], A[13]))
        cout<<"YES"<<endl;
    else if(go(A[21], A[22], A[24], A[23],
                A[2], A[1], A[13], A[15], A[11], A[12], A[20], A[18]))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
