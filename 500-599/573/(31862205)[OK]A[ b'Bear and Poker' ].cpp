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
    int t, a;
    cin>>t;
    while(t%2 == 0)
        t /= 2;
    while(t%3 == 0)
        t /= 3;
    for(int i = 1; i < n; ++i)
    {
        cin>>a;
        while(a%2 == 0)
            a /= 2;
        while(a%3 == 0)
            a /= 3;
        if(a != t)
            return cout<<"No"<<endl, 0;
    }
    cout<<"Yes"<<endl;
    return 0;
}
