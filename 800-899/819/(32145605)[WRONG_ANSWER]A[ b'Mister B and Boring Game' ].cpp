#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string s = "";

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a, b, l, r;
    cin>>a>>b>>l>>r;
    for(int i = 0; i < a; ++i)
        s.push_back(char(i+'a'));
    for(int i = a; i < 1000;)
    {
        for(int j = 0; j < b; ++j, ++i)
            s.push_back(s.back());
        char A[26];
        memset(A, 0, sizeof(A));
        for(int j = 0; j < a; ++j)
            A[int(s[i-j-1]-'a')] = 1;
        int ind = 0;
        for(int j = 0; j < b; ++j, ++i)
        {
            while(A[ind])
                ++ind;
            s.push_back('a'+ind++);
        }
    }
    int d = l/100;
    if(d>1)
        --d;
    l -= d*100;
    r -= d*100;
    r = min(r, 999);
    unordered_set<char> se;
    for(int i = l; i <= r; ++i)
        se.insert(s[i]);
    cout<<se.size()<<endl;
    return 0;
}
