#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if (s[0]>'Z')
    {
        s[0]=(char)(s[0]+'A'-'a');
    }
    cout<<s;
}