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
    cout<<s;
}