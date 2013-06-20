#include<iostream>
using namespace std;
int main()
{
    int x,y,m,count,t;
    cin>>x>>y>>m;
    if (x<y)
    {
        count = x;
        x = y;
        y = count;
    }
    count = -1;
    if (x>=m||y>=m||(x+y)/abs(x+y)!=m/abs(m))
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