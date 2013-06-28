#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int n,si;
    cin>>n;
    while (n--)
    {
        cin>>s;
        si = s.size();
        if (si>10)
        {
            cout<<s[0]<<si-2<<s[si-1];
        }
        else
        {
            cout<<s;
        }
        cout<<endl;
    }
}