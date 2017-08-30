#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char A[26];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    for(int i = 0; i < 26; ++i)
        cin>>A[i];
    map<char,char> ma;
    for(int i = 0; i < 26; ++i)
        cin>>ma[A[i]];
    for(char i = '0'; i<= '9'; ++i)
        ma[i] = i;
    char a;
    while(cin>>a)
    {
        char mask = (a^32) & 32;
        cout<<char(ma[a|32]^mask);
    }
    cout<<endl;
    return 0;
}
