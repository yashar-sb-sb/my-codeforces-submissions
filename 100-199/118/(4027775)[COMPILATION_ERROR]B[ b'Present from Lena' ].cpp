#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="";
    int n,h;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        h = n-i;
        while (h--)
        {
            s+="  ";
        }
        for (int j = 0; j < i; j++)
        {
            s+=to_string(j)+" ";
        }
        s+=to_string(i)+" ";
        for (int j = i-1; j > -1; j--)
        {
            s+=to_string(j)+" ";
        }
        s.pop_back();
        cout<<s<<endl;
        s.clear();
    }
    for (int i = n; i > -1; i--)
    {
        h = n-i;
        while (h--)
        {
            s+="  ";
        }
        for (int j = 0; j < i; j++)
        {
            s+=to_string(j)+" ";
        }
        s+=to_string(i)+" ";
        for (int j = i-1; j > -1; j--)
        {
            s+=to_string(j)+" ";
        }
        s.pop_back();
        cout<<s<<endl;
        s.clear();
    }
}