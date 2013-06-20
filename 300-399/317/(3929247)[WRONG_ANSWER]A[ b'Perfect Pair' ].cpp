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
    count = -1;
    if (x>=m||y>=m||(x+y)-m>min(x,y)-m)
    {
        count++;
        while (x<m&&y<m)
        {
            count++;
            t = x;
            x = x + y;
            y = t;
        }
    }
    cout<<count;
}