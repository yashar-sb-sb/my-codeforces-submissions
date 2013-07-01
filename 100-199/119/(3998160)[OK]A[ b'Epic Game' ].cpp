#include<iostream>
using namespace std;
int r_gcd(int a, int b)
{
    return b ? r_gcd(b, a%b):a;
}
int gcd(int a, int b)
{
    return a > b ? r_gcd(a,b) : r_gcd(b,a);
}
int main()
{
    int a, b, n;
    cin>>a>>b>>n;
    while (true)
    {
        n -= gcd(a,n);
        if (n < 0)
        {
            cout<<1;
            break;
        }
        n -= gcd(b,n);
        if (n < 0)
        {
            cout<<0;
            break;
        }
    }
}