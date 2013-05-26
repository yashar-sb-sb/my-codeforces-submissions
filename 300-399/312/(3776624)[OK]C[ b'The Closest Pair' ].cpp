#include<iostream>
#include<conio.h>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;

#define LL long long
#define ULL unsigned LL

int main()
{
    LL n,k;
    cin>>n>>k;
    if(n*(n-1)/2<=k)
    {
        cout<<"no solution"<<endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<0<<' '<<i<<endl;
    }
}