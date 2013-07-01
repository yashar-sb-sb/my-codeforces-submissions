#include<iostream>
using namespace std;
int main()
{
    int n,count=0,f,i;
    cin>>n;
    while (n--)
    {
        f=0;
        cin>>i;
        f+=i;
        cin>>i;
        f+=i;
        cin>>i;
        f+=i;
        if (f > 1)
        {
            ++count;
        }
    }
    cout<<count;
}