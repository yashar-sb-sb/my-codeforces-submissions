#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a, b, c;
    cin>>a>>b>>c;
    for(int i = 0; i*a <= c; ++i)
    {
        if((c-a*i)%b == 0)
            return cout<<"Yes"<<endl, 0;
    }
    cout<<"No"<<endl;
    return 0;
}
