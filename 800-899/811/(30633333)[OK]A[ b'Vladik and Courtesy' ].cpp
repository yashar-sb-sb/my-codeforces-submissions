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
    for(int i = 1;; ++i)
    {
        if(i&1)
        {
            a -= i;
            if(a < 0)
                return cout<<"Vladik"<<endl, 0;
        }
        else
        {
            b -= i;
            if(b < 0)
                return cout<<"Valera"<<endl, 0;
        }
    }
    return 0;
}
