#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin>>n>>k;
    if(k>=n)
        return cout<<n<<endl, 0;
    deque<int> q;
    for(int i = 0; i < n; ++i)
    {
        int inp;
        cin>>inp;
        q.push_back(inp);
    }
    int count = 0;
    while(count<k)
    {
        int f = q.front();
        q.pop_front();
        if(f>q.front())
        {
            q.push_back(q.front());
            q.pop_front();
            q.push_front(f);
            ++count;
        }
        else
        {
            count = 1;
            q.push_back(f);
        }
    }
    cout<<q.front();
    return 0;
}
