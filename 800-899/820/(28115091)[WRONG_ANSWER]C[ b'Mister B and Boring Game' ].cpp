#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a, b, l, r;
    cin>>a>>b>>l>>r;
    int t = (l-1)/(a+b);
    l -= t * (a+b);
    r -= t * (a+b);
    if(r>100)
        return cout<<a+1, 0;
    int my = 100;
    set<int> s;
    while(l < r)
    {
        t = (l-1)/(a+b);
        l -= t * (a+b);
        r -= t * (a+b);
        if(l <= a)
        {
            int cur = 0;
            for(; l <= a && l <= r; ++l)
            {
                if(cur == my)
                    ++cur;
                s.insert(cur++);
            }
        }
        else
        {
            if(s.size() == 0)
                my = 0;
            else
                my = *s.rbegin();
            s.insert(my);
            ++l;
        }
    }
    cout<<s.size()<<endl;
    return 0;
}
