#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, q;
    int a = 0, b = 1;
    cin>>n>>q;
    while(q--)
    {
        int t, x;
        cin>>t;
        if(t == 1)
        {
            cin>>x;
            if(x % 2)
            {
                t = a;
                a = b;
                b = (t+2)%n;
                ++x;
            }
            a = ((a - x) % n + n) % n;
            b = ((b - x) % n + n) % n;
        }
        else
        {
            swap(a, b);
        }
    }
    for(int i = 0; i < n/2; ++i)
        cout<<1+(a+2*i)%n<<' '<<1+(b+2*i)%n<<' ';
    cout<<endl;
    return 0;
}
