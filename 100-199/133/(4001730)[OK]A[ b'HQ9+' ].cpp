#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,p = "HQ9";
    cin>>s;
    int l = s.size();
    for (int i = 0; i < l; i++)
    {
        if (!(p.find(s[i]) == string::npos))
        {
            cout << "YES";
            return 0;
        }
    }
    cout<< "NO";
    return 0;
}