#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 10000001-n; i < 10000001; i++)
    {
        cout<<i<<' ';
    }
    return 0;
}