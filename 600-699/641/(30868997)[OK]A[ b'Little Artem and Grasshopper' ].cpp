#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    int cur = 0;
    for(int i = 0; i < n; ++i)
    {
        if(s[cur]=='<')
            cur -= A[cur];
        else
            cur += A[cur];
        if(cur<0 || cur >= n)
            return cout<<"FINITE"<<endl, 0;
    }
    cout<<"INFINITE"<<endl;
    return 0;
}
