#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    stack<char> s;
    char c;
    while(cin>>c)
    {
        if(s.empty() || s.top() != c)
            s.push(c);
        else
            s.pop();
    }
    cout<<(s.empty() ? "Yes" : "No")<<endl;
    return 0;
}
