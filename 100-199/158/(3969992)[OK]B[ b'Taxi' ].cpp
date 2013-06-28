#include<iostream>
using namespace std;
int c[4];
int main()
{
    int t,n;
    cin>>n;
    while (n--)
    {
        cin>>t;
        ++c[--t];
    }
    c[0]-=c[2];
    if (c[0]<0)
    {
        c[0]=0;
    }
    cout<<c[3]+c[2]+ceil((c[0]+2*c[1])/4.0);
}