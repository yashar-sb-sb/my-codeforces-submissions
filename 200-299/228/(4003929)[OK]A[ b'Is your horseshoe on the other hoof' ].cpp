#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int i = 0;
    vector<int>v(4);
    cin>>v[0]>>v[1]>>v[2]>>v[3];
    sort(v.begin(),v.end());
    int l = 3;
    while (l--)
    {
        if (v[l]==v[l+1])
        {
            ++i;
        }
    }
    cout<<i;
}