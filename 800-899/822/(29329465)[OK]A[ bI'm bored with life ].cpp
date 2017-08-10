#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    LL a, b;
    cin>>a>>b;
    if(a>b)
        a = b;
    b = 1;
    while(a)
        b *= a--;
    cout<<b<<endl;
    return 0;
}
