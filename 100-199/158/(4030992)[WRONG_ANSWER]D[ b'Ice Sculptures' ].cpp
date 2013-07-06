#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    int n,nn,s=0,ms=-3001;
    cin>>n;
    vector<int> v(n);
    nn = n;
    while (nn--)
    {
        cin>>v[nn];
    }
    int l = n/3+1;
    for (int i = 1; i < l; i++)
    {
        s=0;
        for (int ii = 0; ii < n; ii+=i)
        {
            s+=v[ii];
        }
        if (s>ms)
        {
            ms = s;
        }
    }
    cout<<ms;
}