#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m, mi, ma;
    cin>>n>>m>>mi>>ma;
    int inp;
    cin>>inp;
    int Mi = inp, Ma = inp;
    for(int i = 1; i < m; ++i)
    {
        cin>>inp;
        Mi = min(Mi, inp);
        Ma = max(Ma, inp);
    }
    if(Mi < mi || Ma > ma)
        return cout<<"Incorrect\n", 0;
    int t = 0;
    if(Mi != mi)
        ++t;
    if(Ma != ma)
        ++t;
    cout<<(t<=n-m ? "Correct" : "Incorrect")<<endl;
    return 0;
}
