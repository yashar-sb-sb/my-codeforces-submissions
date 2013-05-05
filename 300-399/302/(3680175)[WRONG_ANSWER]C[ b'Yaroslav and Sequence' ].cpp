#include<iostream>
#include<conio.h>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n,plus=0,minus=0,zero=0,sum=0;
    cin>>n;
    vector<int> vect(2*n-1);
    for (int i = 0; i < 2*n-1; i++)
    {
        cin>>vect[i];
        if (vect[i]>0)
        {
            plus++;
        }
        else if (vect[i]<0)
        {
            minus++;
        }
        else
        {
            zero++;
        }
    }
    minus+=zero;
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (abs(vect[j])<abs(vect[j-1]))
            {
                swap(vect[j],vect[j-1]);
            }
            else
            {
                break;
            }
        }
    }
    if (minus>=n)
    {
        minus-=n;
        for (int i = 0; i < 2*n-1-minus; i++)
        {
            sum+=abs(vect[2*n-2-i]);
        }
        for (int i = 2*n-1-minus; i < 2*n-1; i++)
        {
            sum+=-abs(vect[2*n-2-i]);
        }
    }
    else
    {
        minus = min(minus,n-minus);
        for (int i = 0; i < 2*n-1-minus; i++)
        {
            sum+=abs(vect[2*n-2-i]);
        }
        for (int i = 2*n-1-minus; i < 2*n-1; i++)
        {
            sum+=-abs(vect[2*n-2-i]);
        }
    }
    cout<<sum;
}