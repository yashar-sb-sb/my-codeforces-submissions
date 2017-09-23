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
    vector<int> vec(2, -1e9);
    for(int i = 0; i < n; ++i)
    {
        int inp;
        cin>>inp;
        vec[0] = inp;
        if(vec[0]>vec[1])
            swap(vec[0], vec[1]);
    }
    cout<<max(vec[1], vec[0] + 1)<<endl;
    return 0;
}
