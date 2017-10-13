#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(char cha = 'a'; cha <= 'z' && n; ++cha)
    {
        int c = sqrt(n)+10;
        while(c*(c-1)/2 > n)
            --c;
        n -= c*(c-1)/2;
        while(c--)
            cout<<cha;
    }
    cout<<endl;
    return 0;
}
