#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string s;
int n, k;
bool valid = true;

char setTo(char c, int l, int r, int num)
{
    if(c != '?')
        return c;
    if(l <= num && num <= r)
        return 'D';
    if(num == r+1)
        return 'W';
    return 'L';
}

int f(int ind, int l, int r)
{
    char c = s[ind];
    int nl = l;
    int nr = r;
    if(c == '?')
        --nl, ++nr;
    else if(c == 'L')
        --nl, --nr;
    else if(c == 'W')
        ++nl, ++nr;
    if(ind+1 == n)
    {
        nl = max(-k, nl);
        nr = min(k, nr);
        if(nl == -k)
        {
            s[ind] = setTo(s[ind], l, r, -k);
            return -k;
        }
        if(nr == k)
        {
            s[ind] = setTo(s[ind], l, r, k);
            return k;
        }
        valid = false;
        return 0;
    }
    nl = max(1-k, nl);
    nr = min(k-1, nr);
    if(nr<nl)
    {
        valid = false;
        return 0;
    }
    int t = f(ind + 1, nl, nr);
    if(s[ind+1] == 'L')
        ++t;
    if(s[ind+1] == 'W')
        --t;
    s[ind] = setTo(s[ind], l, r, t);
    return t;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k;
    cin>>s;
    f(0, 0, 0);
    if(!valid)
        return cout<<"NO"<<endl, 0;
    cout<<s<<endl;
    return 0;
}
