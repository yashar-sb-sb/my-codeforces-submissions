#include<iostream>
int main()
{
    int n = 0;
    std::cin>>n;
    unsigned long long a,b,t=0,max=0;
    while (n--)
    {
        std::cin>>a>>b;
        t-=a;
        t+=b;
        if (t>max)
        {
            max = t;
        }
    }
    std::cout<<max;
}