#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k, m;
    cin>>n>>k>>m;
    bool same = true;
    for(int i = 0; i < n; ++i)
    {
        cin>>A[i];
        if(A[i] != A[0])
            same = false;
    }
    if(same)
        return cout<<LL(n) * LL(m) % LL(k)<<endl, 0;
    stack<pii> st;
    st.emplace(0,0);
    for(int i = 0; i < n; ++i)
    {
        if(A[i] == st.top().first)
            ++st.top().second;
        else
            st.emplace(A[i], 1);
        if(st.top().second == k)
            st.pop();
    }
    n = 0;
    while(!st.empty())
    {
        for(int i = 0; i < st.top().second; ++i)
            A[n++] = st.top().first;
        st.pop();
    }
    if(m == 1)
        return cout<<n<<endl, 0;
    int l = 0, r = n-1;
    int tl, tr;
    int sz;
    int tsz;
    while(A[l] == A[r] && l<=r)
    {
        int Ol = l, Or = r;
        tl = l, tr = r;
        while(tl < n && A[tl] == A[l])
            ++tl;
        while(tr > -1 && A[tr] == A[r])
            --tr;
        sz = tl-l + r-tr;
        tsz = sz/k*k;
        while(l < tl && tsz > 0)
        {
            --tsz;
            ++l;
        }
        while(r > tr && tsz > 0)
        {
            --tsz;
            --r;
        }
        if(Ol == l && Or == r)
            break;
    }
    if(tl > tr)
    {
        LL rem = LL(sz/2)*m%k;
        if(rem == 0)
            return cout<<0<<endl, 0;
        rem += n-sz/2;
        return cout<<rem<<endl, 0;
    }
    LL rem = LL(m-1) * (r-l+1) + n;
    cout<<rem<<endl;
    return 0;
}
//change
