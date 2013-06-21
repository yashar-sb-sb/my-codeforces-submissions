#include<iostream>
using namespace std;
int main()
{
    unsigned long long n,k;
    cin>>n>>k;
    if (n%2)
    {
        ++n;
    }
    n/=2;
    if (k>n)
    {
        cout<<(k-n)*2;
    }
    else
    {
        cout<<2*k-1;
    }
}