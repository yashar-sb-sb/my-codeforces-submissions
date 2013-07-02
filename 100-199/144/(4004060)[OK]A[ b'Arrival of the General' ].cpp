#include<iostream>
using namespace std;
int main()
{
    int t,n,max,min,maxi=0,mini=0;
    cin>>n>>t;
    min = max = t;
    for (int i = 1; i < n; i++)
    {
        cin>>t;
        if (max<t)
        {
            max = t, maxi = i;
        }
        else if (min>=t)
        {
            min = t, mini = i;
        }
    }
    if (mini>maxi)
    {
        cout<<maxi+n-mini-1;
    }
    else
    {
        cout<<maxi+n-mini-2;
    }
    return 0;
}