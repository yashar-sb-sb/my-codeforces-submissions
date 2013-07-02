#include<iostream>
using namespace std;
int main()
{
    unsigned long long n;
    unsigned short nn=0,d;
    cin>>n;
    while (n)
    {
        d = n%10;
        if (d == 4 || d == 7)
        {
            ++nn;
        }
        n/=10;
    }
    if (!nn)
    {
        ++nn;
    }
    while (nn)
    {
        d = nn%10;
        if (d!=4 && d!=7)
        {
            cout<<"NO";
            return 0;
        }
        nn/=10;
    }
    cout<<"YES";
    return 0;
}