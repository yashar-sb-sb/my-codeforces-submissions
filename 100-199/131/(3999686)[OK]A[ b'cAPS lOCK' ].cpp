#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l = s.size();
    while (l--&&s[l]<'a');
    if (l == -1)
    {
        l = s.size();
        int d = 'a' - 'A';
        for (int i = 0; i < l; i++)
        {
            s[i]+=d;
        }
    }
    else if (l == 0)
    {
        l = s.size();
        int d = 'a' - 'A';
        s[0] -= d;
        for (int i = 1; i < l; i++)
        {
            s[i] += d;
        }
    }
    cout<<s;
}