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
    int k;
    cin>>k;
    queue<int> q1, q2;
    while(k--)
    {
        cin>>n;
        q1.push(n);
    }
    cin>>k;
    while(k--)
    {
        cin>>n;
        q2.push(n);
    }
    n = 1e7;
    while(n-- && !q1.empty() && q2.empty())
    {
        if(q1.front() > q2.front())
        {
            q1.push(q2.front());
            q1.push(q1.front());
        }
        else
        {
            q2.push(q1.front());
            q2.push(q2.front());
        }
        q1.pop();
        q2.pop();
    }
    if(q1.empty())
        cout<<1e7-n<<' '<<1<<endl;
    else if(q2.empty())
        cout<<1e7-n<<' '<<2<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
