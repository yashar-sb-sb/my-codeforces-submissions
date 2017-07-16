#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string s, t;
int S[1000], T[1000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>s>>t;
    for(char i:s)
        ++S[(int)i];
    for(char i:t)
        ++T[(int)i];
    for(int i = 1; S[(int)'?']; ++i)
    {
        for(int j = 'a'; j <= 'z'; ++j)
        {
            while(T[j] && S[j]/T[j]<i && S[(int)'?']>0)
            {
                --S[(int)'?'];
                ++S[j];
                s+=(char(j));
            }
        }
    }
    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] == '?')
        {
            s[i] = s.back();
            s.pop_back();
        }
    }
    cout<<s<<endl;
    return 0;
}
