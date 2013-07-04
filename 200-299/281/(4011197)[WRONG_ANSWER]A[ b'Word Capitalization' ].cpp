#include<iostream>
#include<string>
using namespace std;
int main()
{
    short l,d='a'-'A';
    string s;
    cin>>s;
    l = s.size();
    if (s[0]<'a')
    {
        cout<<s[0];
    }
    else
    {
        cout<<(char)(s[0]-d);
    }
    for (int i = 1; i < l; i++)
    {
        if (s[i]<'a')
        {
            cout<<(char)(d+s[i]);
        }
        else
        {
            cout<<(char)s[i];
        }
    }
}