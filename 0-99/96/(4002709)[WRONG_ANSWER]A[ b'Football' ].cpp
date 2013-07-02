#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i=0,l;
    string s;
    cin>>s;
    l = s.size();
    while (l--)
    {
        if (s[l]==s[l+1])
        {
            if (++i == 7)
            {
                cout<<"YES";
                return 0;
            }
        }
        else
        {
            i=0;
        }
    }
    cout << "NO";
    return 0;
}