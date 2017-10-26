#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    map<char, int> ma;
    ma['v'] = 0;
    ma['<'] = 1;
    ma['^'] = 2;
    ma['>'] = 3;
    char start, end;
    cin>>start>>end;
    int n;
    cin>>n;
    if(n%4 == 2)
        return cout<<"undefined"<<endl, 0;
    if((4+ma[start]-ma[end])%4 == n%4)
        cout<<"c";
    cout<<"cw"<<endl;
    return 0;
}
