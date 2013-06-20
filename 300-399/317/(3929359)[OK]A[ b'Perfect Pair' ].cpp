#include<iostream>
using namespace std;
int main()
{
    long long x,y,m,count,t;
    cin>>x>>y>>m;
    if (x<y)
    {
        count = x;
        x = y;
        y = count;
    }
    if (x>=m||y>=m)
    {
        cout<<0;
    }
    else if ((x+y)-m>min(x,y)-m)
    {
        count=0;
        if (y<0)
        {
            count+=(-y)/x;
            y+=(-y)/x*x;
        }
        while (x<m&&y<m)
        {
            if (x<y)
            {
                t = x;
                x = y;
                y = t;
            }
            count++;
            t = x;
            x = x + y;
            y = t;
        }
        cout<<count;
    }
    else
    {
        cout<<-1;
    }
}