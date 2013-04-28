#include<iostream>
int main()
{
    int m,n,a;
    std::cin>>m>>n>>a;
    std::cout<<ceil((float)m/a)*ceil((float)n/a);
}