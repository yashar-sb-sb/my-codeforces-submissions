#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100001];
int n, k;

void f(int l, int r, int b)
{
    if(l+1 == r || !k)
    {
        while(l < r)
            A[l++] = b++;
        return;
    }
    int lenl = (l+r)/2 - l;
    int lenr = r - (l+r)/2;
    k -= 2;
    f(l, l+lenl, b+lenr);
    f(l+lenl, r, b);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k;
    if(k % 2 == 0)
        return cout<<-1<<endl, 0;
    --k;
    f(0, n, 1);
    if(k)
        return cout<<-1<<endl, 0;
    for(int i = 0; i < n; ++i)
        cout<<A[i]<<' ';
    cout<<endl;
    return 0;
}
