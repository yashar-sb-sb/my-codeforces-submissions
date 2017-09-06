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
    for(int i = 1; i < n; ++i)
    {
        cout<<"I "<<(i&1 ? "hate" : "love")<<" that ";
    }
    cout<<"I "<<(n&1 ? "hate" : "love")<<" it"<<endl;
    return 0;
}
