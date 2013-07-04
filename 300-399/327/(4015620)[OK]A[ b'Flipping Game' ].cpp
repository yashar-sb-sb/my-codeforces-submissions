#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    int n,A[100],mi,mj,ms;
    cin>>n;
    for (int ii = 0; ii < n; ii++)
    {
        cin>>A[ii];
    }
    int i=-1;
    while (++i<n&&A[i]);
    if (i == n)
    {
        cout<< n - 1;
        return 0;
    }
    int j=n;
    while (--j>-1&&A[j]);
    mi = i, mj = j;
    ms = i;
    ms += n-j-1;
    for (int ii = i; ii <= j; ii++)
    {
        ms+=1-A[ii];
    }
    int sum = ms,t;
    sum-=A[j+1]?1:-1;
    t = sum;
    for (i; i <= j; i++)
    {
        sum = t;
        sum+=A[i]?1:-1;
        t = sum;
        for (int ii = j+1; ii>=i; ii--)
        {
            sum+=A[ii]?1:-1;
            if (sum>ms)
            {
                ms = sum;
            }
        }
    }
    cout<<ms;
    return 0;
}