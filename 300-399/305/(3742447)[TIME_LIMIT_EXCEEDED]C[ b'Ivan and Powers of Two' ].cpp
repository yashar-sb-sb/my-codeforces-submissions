#include<iostream>
#include<conio.h>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

void main()
{
    int n,j=1;
    bool flag;
    unsigned long long t,m=0;
    cin>>n;
    vector<unsigned long long>A(n);
    cin>>A[0];
    --n;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        flag = true;
        for (int k = j; k; k--)
        {
            if (t==A[k-1])
            {
                ++A[k-1];
                flag=false;
                break;
            }
        }
        if (flag)
        {
            A[j]=t;
            ++j;
        }
    }
    while (true)
    {
        for (int i = 0; i < j; i++)
        {
            t=A[i];
            flag = false;
            for (int k = i; k; k--)
            {
                if (t==A[k-1])
                {
                    ++A[k-1];
                    flag=true;
                    break;
                }
            }
            if (flag)
            {
                for (int k = i+1; k < j; k++)
                {
                    A[k-1]=A[k];
                }
                --j;
            }
        }
        --j;
        flag=true;
        for (int i = 0; i < j; i++)
        {
            if (A[i]==A[i+1])
            {
                flag=false;
                break;
            }
        }
        ++j;
        if (flag)
        {
            break;
        }
    }
    for (int i = 0; i < j; i++)
    {
        if (A[i]>m)
        {
            m=A[i];
        }
    }
    cout<<m - --j;
}