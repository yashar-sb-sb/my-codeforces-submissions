#include<iostream>
#include<conio.h>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n,plus=0,minus=0,zero=0,sum=0,res=0;
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
    sort(vect.begin(),vect.end());
    for (int i = 0; i < 2*n-1; i++)
    {
        sum+=vect[i];
    }
    for (int i = 0; i < n; i++)
    {
        vect[i]*=-1;
    }
    res = sum;
    sum=0;
    for (int i = 0; i < 2*n-1; i++)
    {
        sum+=vect[i];
    }
    res = max(res,sum);
    for (int i = 0; i < n; i++)
    {
        vect[i]*=-1;
    }
    sum=0;
    for (int i = 0; i < 2*n-1; i++)
    {
        sum+=vect[i];
    }
    res = max(res,sum);
    sort(vect.begin(),vect.end());
    for (int i = 0; i < n; i++)
    {
        vect[i]*=-1;
    }
    sort(vect.begin(),vect.end());
    sum=0;
    for (int i = 0; i < 2*n-1; i++)
    {
        sum+=vect[i];
    }
    res = max(res,sum);
    sort(vect.begin(),vect.end());
    for (int i = 0; i < n; i++)
    {
        vect[i]*=-1;
    }
    sum=0;
    for (int i = 0; i < 2*n-1; i++)
    {
        sum+=vect[i];
    }
    res = max(res,sum);
    sort(vect.begin(),vect.end());
    for (int i = 0; i < n; i++)
    {
        vect[i]*=-1;
    }
    sum=0;
    for (int i = 0; i < 2*n-1; i++)
    {
        sum+=vect[i];
    }
    res = max(res,sum);
    sort(vect.begin(),vect.end());
    for (int i = 0; i < n; i++)
    {
        vect[i]*=-1;
    }
    sum=0;
    for (int i = 0; i < 2*n-1; i++)
    {
        sum+=vect[i];
    }
    res = max(res,sum);
    cout<<res;
}