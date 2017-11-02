#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char A[1000][1001];
#define S(i,j) A[i][j]=A[j][i]='Y'

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int k;
    cin>>k;
    int ml = k;
    memset(A, 'N', sizeof(A));
    int start = 2;
    while(k)
    {
        int left = start++;
        int mid = start++;
        int right = start++;
        int cur = 1;
        S(left,0);
        S(right,0);
        S(mid,0);
        int l = 1;
        while(LL(cur)*3LL<=k)
        {
            l*=3;
            cur *= 3;
            int nl = start++;
            int nr = start++;
            int nm = start++;
            S(left, nr);
            S(left, nl);
            S(left, nm);

            S(right, nr);
            S(right, nm);
            S(right, nl);

            S(mid, nr);
            S(mid, nm);
            S(mid, nl);

            left = nl;
            right = nr;
            mid = nm;
        }
        while(LL(l)*3LL<=ml)
        {
            l*=3;
            int nl = start++;
            S(left, nl);
            left = nl;
        }
        k-=cur;
        S(left,1);
    }
    cout<<start<<'\n';
    for(int i = 0; i < start; ++i)
    {
        for(int j = 0; j < start; ++j)
            cout<<A[i][j];
        cout<<'\n';
    }
    return 0;
}
