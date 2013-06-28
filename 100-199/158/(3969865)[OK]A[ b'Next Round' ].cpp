#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,n,k,c=0;
    cin>>n>>k;
    vector<int>vec(n);
    k;
    i = -1;
    while (++i<n)
    {
        cin>>vec[i];
    }
    i=-1;
    while (++i<n&&vec[i]&&(i<k||(i<n&&(vec[i]==vec[i-1]))));
    cout<<i;
}