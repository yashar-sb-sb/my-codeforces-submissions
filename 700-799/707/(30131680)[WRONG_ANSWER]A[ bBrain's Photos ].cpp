#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a;
    cin>>a>>a;
    a = 0;
    char c;
    while(cin>>c)
        a += c!='W' && c!='B';
    cout<<( a ? "#Color" : "#Black&White")<<endl;
    return 0;
}
