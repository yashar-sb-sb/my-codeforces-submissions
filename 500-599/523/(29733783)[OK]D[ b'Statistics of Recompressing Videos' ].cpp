#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

priority_queue<LL, vector<LL>, greater<LL>> E;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k, s, m;
    cin>>n>>k;
    LL t = 0;
    for(int i = 0; i < n; ++i)
    {
        cin>>s>>m;
        while(t < s)
        {
            if(!E.empty())
            {
                t = min(LL(s), E.top());
                if(t == E.top())
                    ++k, E.pop();
            }
            else
                t = s;
        }
        if(!k)
            t = E.top();
        if(!E.empty() && t == E.top())
            ++k, E.pop();
        --k;
        E.push(t+m);
        cout<<t+m<<'\n';
    }
    return 0;
}
