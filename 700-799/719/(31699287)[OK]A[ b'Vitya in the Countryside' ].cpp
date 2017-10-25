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
    int a, b;
    for(int i = 1; i < n; ++i)
        cin>>a;
    cin>>b;
    if(b==0)
        return cout<<"UP"<<endl, 0;
    else if(b==15)
        return cout<<"DOWN"<<endl, 0;
    if(n == 1)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(b<a)
        cout<<"DOWN"<<endl;
    else
        cout<<"UP"<<endl;
    return 0;
}
