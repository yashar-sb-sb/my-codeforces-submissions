#include<iostream>
int main()
{
    unsigned long long m,n,a;
    std::cin>>m>>n>>a;
    std::cout<<ceil((long double)m/a)*ceil((long double)n/a);
}