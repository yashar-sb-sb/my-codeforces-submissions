#include<iostream>
using namespace std;
int main()
{
    int x,y,z,a,b,c,n;
    cin>>n;
    cin>>x>>y>>z;
    while (--n)
    {
        cin>>a>>b>>c;
        x+=a,y+=b,z+=c;
    }
    if (x==0 && y==0 && z==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}