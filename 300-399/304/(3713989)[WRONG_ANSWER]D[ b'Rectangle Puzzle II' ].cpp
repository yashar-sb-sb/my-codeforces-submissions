#include<iostream>
#include<conio.h>
#include<vector>
#include<cmath>
using namespace std;
long long gcd(long long a,long long b)
{
    if (b<=1)
    {
        return a;
    }
    return gcd(b,a%b);
}
int main()
{
    int m,n,x,y,a,b;
    cin>>m>>n>>x>>y>>a>>b;
    int w=0,h=0;
    int g;
    if (a>b)
    {
        g = gcd(a,b);
    }
    else
    {
        g = gcd(b,a);
    }
    a/=g;
    b/=g;
    while (w<=m&&h<=n)
    {
        w+=a;
        h+=b;
    }
    w-=a;
    h-=b;
    int x1 = x-w/2;
    int x2 = x1+w;
    int y1 = y-h/2;
    int y2 = y1+h;
    if (x1<0)
    {
        x2-=x1;
        x1=0;
    }
    else if (x2>m)
    {
        x1-=x2-m;
        x2=m;
    }
    if (y1<0)
    {
        y2-=y1;
        y1=0;
    }
    else if (y2>n)
    {
        y1-=y2-n;
        y2=n;
    }
    cout<<x1<<' '<<y1<<' '<<x2<<' '<<y2;
}