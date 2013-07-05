#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,h="hello";
    cin>>s;
    int j=0,l = s.size();
    for (int i = 0; i < l; i++)
    {
        if (h[j] == s[i])
        {
            if (++j == 5)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}