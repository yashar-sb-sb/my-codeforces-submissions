#include<iostream>
#include<conio.h>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int n,counter=0;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            for (int k = j; k <= n; k++)
            {
                if (i*i+j*j==k*k)
                {
                    ++counter;

                }
            }
        }
    }
    cout<<counter;
}