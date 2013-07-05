#include<iostream>
#include<string>
using namespace std;
int main()
{
    int A[26] = {};
    string a,b;
    cin>>a>>b;
    a+=b;
    cin>>b;
    int l = a.size();
    for (int i = 0; i < l; i++)
    {
        ++A[a[i]-'A'];
    }
    if (l != b.size())
    {
        cout<<"NO";
        return 0;
    }
    for (int i = 0; i < l; i++)
    {
        if (--A[b[i]-'A']<0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}