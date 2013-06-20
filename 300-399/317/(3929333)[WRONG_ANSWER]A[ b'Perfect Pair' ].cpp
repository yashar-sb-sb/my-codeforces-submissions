#include<iostream>
using namespace std;
int main()
{
    long long x,y,m,t;
    cin>>x>>y>>m;
    if (x<y)
    {
        t = x;
        x = y;
        y = t;
    }
    if (x>=m||y>=m||(x+y)-m>min(x,y)-m)
    {
        cout<<(m-y)/x;
    }
    else
    {
        cout<<-1;
    }
}