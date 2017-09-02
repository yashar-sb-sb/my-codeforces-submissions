#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> V;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    V.reserve(600000);
    int k;
    string s;
    cin>>k;
    cin.ignore();
    getline(cin, s);
    int len = 0;
    for(char c:s)
    {
        ++len;
        if(c == ' ' || c == '-')
        {
            V.push_back(len);
            len = 0;
        }
    }
    V.push_back(len);
    int n = s.size();
    int l = 0, r = n;
    for(int i:V)
        l = max(i, l);
    --l;
    while(l+1 < r)
    {
        int m = (l + r) / 2;
        len = 1;
        int sum = 0;
        for(int i:V)
        {
            if(sum + i > m)
            {
                sum = 0;
                ++len;
            }
            sum += i;
        }
        if(len <= k)
            r = m;
        else
            l = m;
    }
    cout<<r<<endl;
    return 0;
}
