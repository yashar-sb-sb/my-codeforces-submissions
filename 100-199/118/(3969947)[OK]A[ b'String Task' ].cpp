#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,v="aeiouyAEIOUY";
    cin>>s;
    int si = s.size();
    int i = -1;
    while (++i < si)
    {
        if (v.find(s[i])!=string::npos)
        {
            continue;
        }
        cout<<'.'<<(char)((s[i]>'Z')?s[i]:s[i]+('a'-'A'));
    }
}