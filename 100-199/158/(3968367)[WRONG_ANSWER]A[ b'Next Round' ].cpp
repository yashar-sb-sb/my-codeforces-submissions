#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    int i,n,k,c=0;
    cin>>n>>k;
    vector<int>vec(n);
    k++;
    i = n;
    while (i--)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end(),greater<int>());
    while (vec[++i]&&i<k);
    cout<<i;
}