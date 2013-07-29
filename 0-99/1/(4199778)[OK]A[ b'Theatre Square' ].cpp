#include<iostream>
#include<cmath>
int main()
{
    unsigned long long m,n,a;
    std::cin>>m>>n>>a;
    std::cout<<(unsigned long long)ceil((long double)m/a)*(unsigned long long)ceil((long double)n/a);
}