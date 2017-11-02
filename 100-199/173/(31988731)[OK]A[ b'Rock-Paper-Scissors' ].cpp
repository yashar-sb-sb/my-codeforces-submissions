#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int D[256][256];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    D[int('R')][int('S')] = 1;
    D[int('S')][int('P')] = 1;
    D[int('P')][int('R')] = 1;
    int n, a, b;
    string A, B;
    cin>>n>>A>>B;
    a = A.size();
    b = B.size();
    int ar = 0, br = 0;
    int am = 0, bm = 0;
    for(int i = 0; i < n%(a*b); ++i)
    {
        char aa = A[i%a];
        char bb = B[i%b];
        ar += D[int(bb)][int(aa)];
        br += D[int(aa)][int(bb)];
    }
    for(int i = 0; i < (a*b); ++i)
    {
        char aa = A[i%a];
        char bb = B[i%b];
        am += D[int(bb)][int(aa)];
        bm += D[int(aa)][int(bb)];
    }
    cout<<ar+n/a/b*am<<' '<<br+n/a/b*bm<<endl;
    return 0;
}
