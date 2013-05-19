#include<iostream>
#include<conio.h>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int gcd(int a,int b)
{
    if (!b)
    {
        return a;
    }
    return gcd(b,a%b);
}

void main()
{
    int n;
    unsigned long long p,q,a=0,b=1,g;
    cin>>p>>q>>n;
    vector<unsigned long long>A(n);
    g = p>q ? gcd(p,q) : gcd(q,p);
    p/=g;
    q/=g;
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    for (int i = n; i; --i)
    {
        a+=A[i-1]*b;
        g = a>b ? gcd(a,b) : gcd(b,a);
        a/=g;
        b/=g;
        swap(a,b);
    }
    if (b==p&&a==q)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}