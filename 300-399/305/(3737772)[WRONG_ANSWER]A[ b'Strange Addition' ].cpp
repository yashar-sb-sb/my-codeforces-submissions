#include<iostream>
#include<conio.h>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

void main()
{
    int n,*A,t,z=0,nz=0;
    bool *B;
    cin>>n;
    A=new int[n];
    B=new bool[n];
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        A[i] = t;
        B[i]=false;
        if (!t)
        {
            B[i] = true;
        }
        while (t)
        {
            if (!(t%10))
            {
                B[i]=true;
                break;
            }
            t/=10;
        }
        if (B[i])
        {
            ++z;
        }
        else
        {
            ++nz;
        }
    }
    cout<<min(2*z,n)<<endl;
    for (int i = 0; z && i < n; i++)
    {
        if (B[i])
        {
            --z;
        }
        cout<<A[i]<<' ';
    }
}