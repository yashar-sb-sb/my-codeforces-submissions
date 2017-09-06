#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, a, b, A = 0, B = 0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a>b)
            ++A;
        else if(a<b)
            ++B;
    }
    if(A>B)
        cout<<"Mishka";
    else if(A<B)
        cout<<"Chris";
    else
        cout<<"Friendship is magic!^^";
    cout<<endl;
return 0;
}
