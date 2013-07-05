#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    string s;
    stringstream ss;
    int n,h;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ss.clear();
        ss.str("");
        h = n-i;
        while (h--)
        {
            ss<<"  ";
        }
        for (int j = 0; j < i; j++)
        {
            ss<<j<<' ';
        }
        ss<<i<<' ';
        for (int j = i-1; j > -1; j--)
        {
            ss<<j<<' ';
        }
        s = ss.str();
        s.pop_back();
        cout<<s<<endl;
    }
    for (int i = n; i > -1; i--)
    {
        ss.clear();
        ss.str("");
        h = n-i;
        while (h--)
        {
            ss<<"  ";
        }
        for (int j = 0; j < i; j++)
        {
            ss<<j<<' ';
        }
        ss<<i<<' ';
        for (int j = i-1; j > -1; j--)
        {
            ss<<j<<' ';
        }
        s = ss.str();
        s.pop_back();
        cout<<s<<endl;
    }
}