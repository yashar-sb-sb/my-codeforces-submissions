#include<iostream>
using namespace std;
int main()
{
    int n;
    for (int i = 0; i < 25; i++)
    {
        cin>>n;
        if (n)
        {
            n = i;
            cin.clear();
            break;
        }
    }
    cout<<abs(n%5-2)+abs(n/5-2);
}