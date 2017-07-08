#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a=0, b=0;
    char c;
    string word = "";
    int n;
    cin>>n;
    bool inside = false;
    while(cin>>c)
    {
        if((c>='a' && c<='z') || (c>='A' && c<='Z'))
        {
            word += c;
        }
        else
        {
            if(word.size())
            {
                if(inside)
                {
                    ++b;
                }
                else
                {
                    a = max(a, int(word.size()));
                }
            }
            word = "";
            if(c==')')
                inside = false;
            if(c=='(')
                inside = true;
        }
    }
    cout<<a<<' '<<b<<endl;
    return 0;
}
