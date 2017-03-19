#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);
    int a,b,c=0;
    cin>>a>>b;
    while(a<=b)
    {
        a*=3;
        b*=2;
        c++;
    }
    cout<<c<<endl;
}
