#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

set<int> se;
stack<int> st;

int ans = 0;

void pop(int i)
{
    if(st.empty())
        se.erase(i);
    else if(st.top() == i)
        st.pop();
    else
    {
        ++ans;
        while(!st.empty())
        {
            se.insert(st.top());
            st.pop();
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, inp;
    int rem = 1;
    cin>>n;
    string s;
    for(int i = 0; i < 2*n; ++i)
    {
        cin>>s;
        if(s == "remove")
            pop(rem++);
        else
        {
            cin>>inp;
            st.push(inp);
        }
    }
    cout<<ans<<endl;
    return 0;
}
