#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    unsigned long long a,b,c,s=0;
    cin>>a>>b>>c;
    unsigned long long min = a<b?a:b;
    if (min>c)
    {
        min = c;
    }
    a-=min;
    b-=min;
    c-=min;
    s+=min;
    s+=a/3;
    s+=b/3;
    s+=c/3;
    int i =0;
    if (a%3==2)
    {
        i++;
    }
    if (b%3==2)
    {
        i++;
    }
    if (c%3==2)
    {
        i++;
    }
    if (i==2)
    {
        s++;
    }
    cout<<s;
}