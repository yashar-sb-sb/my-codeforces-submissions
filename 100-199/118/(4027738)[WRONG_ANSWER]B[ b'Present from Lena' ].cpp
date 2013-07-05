#include<iostream>
using namespace std;
int main()
{
    int n,h;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        h = n-i;
        while (h--)
        {
            cout<<' ';
        }
        for (int j = 0; j < i; j++)
        {
            cout<<j;
        }
        cout<<i;
        for (int j = i-1; j > -1; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    for (int i = n; i > -1; i--)
    {
        h = n-i;
        while (h--)
        {
            cout<<' ';
        }
        for (int j = 0; j < i; j++)
        {
            cout<<j;
        }
        cout<<i;
        for (int j = i-1; j > -1; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}