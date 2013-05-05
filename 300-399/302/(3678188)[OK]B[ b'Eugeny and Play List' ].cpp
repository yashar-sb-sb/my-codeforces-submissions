#include<iostream>
#include<conio.h>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long int n,m,c,t,v;
    cin>>n>>m;
    unsigned long long int *Arr = new unsigned long long int[n+1];
    Arr[0]=0;
    for (int i = 1; i < n+1; i++)
    {
        cin>>c>>t;
        Arr[i]=Arr[i-1]+c*t;
    }
    int j = 0;
    for (int i = 0; i < m; i++)
    {
        cin>>v;
        int t = Arr[j];
        while (Arr[j]<v)
        {
            j++;
        }
        cout<<j<<endl;
    }
}