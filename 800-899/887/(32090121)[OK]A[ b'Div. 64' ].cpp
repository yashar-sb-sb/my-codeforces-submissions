#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    char c;
    int count = 0;
    while(cin>>c && c=='0');
    while(cin>>c)
        count += c=='0';
    cout<<(count>=6 ? "yes" : "no")<<endl;
    return 0;
}
