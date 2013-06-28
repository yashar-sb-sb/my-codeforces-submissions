#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<m+n-1<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<' '<<1<<endl;
    }
    for (int i = 1; i < m; i++)
    {
        cout<<1<<' '<<i+1<<endl;
    }
}