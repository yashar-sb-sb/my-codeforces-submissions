#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[256];
char mi = 'a';

char min()
{
    while(A[int(mi)] == 0)
        ++mi;
    return mi;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    cin>>s;
    for(char i:s)
        ++A[int(i)];
    ++A[int('z')];
    stack<char> st;
    string ans = "";
    for(char i:s)
    {
        st.push(i);
        --A[int(i)];
        while(!st.empty() && st.top() <= min())
        {
            ans.push_back(st.top());
            st.pop();
        }
    }
    cout<<ans<<endl;
    return 0;
}
