#include<iostream>
using namespace std;
char nam[5][8]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
int main()
{
    unsigned long long n;
    cin>>n;
    --n;
    unsigned t;
    t = 1;
    while (n>5*t)
    {
        n-=5*t;
        t*=2;
    }
    cout<<nam[n/t%5];
}