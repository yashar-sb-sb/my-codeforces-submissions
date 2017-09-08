#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a, b;
    cin>>a>>b;
    a *= b;
    while(a)
    {
        cout<<a%10;
        a /= 10;
    }
    return 0;
}
