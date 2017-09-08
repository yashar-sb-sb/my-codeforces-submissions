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
    queue<int> q;
    int a = 0, b = 0;
    int t, c;
    cin>>t>>c;
    for(int i = 1; i < 2000009; ++i)
    {
        if(!q.empty())
        {
            q.pop();
            a = i;
        }
        while(t<=i && n)
        {
            while(c--)
                q.push(1);
            if(--n)
                cin>>t>>c;
        }
        b = max(b, int(q.size()));
    }
    cout<<a<<' '<<b<<endl;
    return 0;
}
