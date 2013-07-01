#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    char c = 0,cc;
    while (n--)
    {
        cin>>cc;
        if (cc == c)
        {
            ++count;
        }
        c = cc;
    }
    cout << count;
}