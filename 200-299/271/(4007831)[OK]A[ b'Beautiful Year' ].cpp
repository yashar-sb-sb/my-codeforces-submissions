#include<iostream>
using namespace std;
int main()
{
    int y,a,b,c,d,t;
    cin>>y;
    do
    {
        t = ++y;
        a = t%10;
        t/=10;
        b = t%10;
        t/=10;
        c= t%10;
        t/=10;
        d= t%10;
    }
    while (!((a-b)*(a-c)*(a-d)*(b-c)*(b-d)*(c-d)));
    cout<<y;
}