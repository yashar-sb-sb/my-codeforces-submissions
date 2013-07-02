#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    int s=0,i,n,ss=0;
    cin>>n;
    vector<int>v(n);
    while (n--)
    {
        cin>>i;
        s+=i;
        v[n] = i;
    }
    sort(v.begin(),v.end(),std::greater<int>());
    n = v.size();
    i=0;
    while (i<n&&ss<=s-ss)
    {
        ss+=v[i++];
    }
    cout<<i;
}