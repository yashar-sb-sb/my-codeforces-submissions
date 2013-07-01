#include<iostream>
using namespace std;
int main()
{
    int c=0,k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    ++d;
    for (int i = 1; i < d; i++)
    {
        if (!(i%k)||!(i%l)||!(i%m)||!(i%n))
        {
            ++c;
        }
    }
    cout << c;
}