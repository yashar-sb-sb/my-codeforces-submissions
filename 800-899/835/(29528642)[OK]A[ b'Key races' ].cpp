#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int s, v1, v2, t1, t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int first = s*v1+2*t1;
    int second = s*v2+2*t2;
    if(first < second)
        cout<<"First";
    else if(second < first)
        cout<<"Second";
    else
        cout<<"Friendship";
    cout<<endl;
    return 0;
}
