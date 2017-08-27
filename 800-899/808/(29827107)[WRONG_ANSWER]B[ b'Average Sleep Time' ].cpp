#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k, day;
    cin>>n>>k;
    ldb sum = 0;
    for(int i = 0; i < n; ++i)
    {
        cin>>day;
        sum += ldb(LL(day) * min(k,min(i+1, n-i)))/ldb(n-k+1);
    }
    cout.precision(10);
    cout.setf(ios::fixed);
    cout<<sum<<endl;
    return 0;
}
