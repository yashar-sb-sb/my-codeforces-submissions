#include<iostream>
#include<string>
using namespace std;
int main()
{
    bool B[26] = {};
    short f = 1;
    string s;
    cin>>s;
    int l = s.size();
    for (int i = 0; i < l; i++)
    {
        if (!B[s[i]-'a'])
        {
            B[s[i]-'a'] = true;
            f*=-1;
        }
    }
    if (f == 1)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}