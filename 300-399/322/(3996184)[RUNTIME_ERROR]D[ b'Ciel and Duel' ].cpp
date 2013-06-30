#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<string>
using namespace std;
int main()
{
    vector<int>ena(0);
    vector<int>end(0);
    vector<int>my(0);
    vector<int>myn(0);
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        string s;
        int inp;
        cin>>s>>inp;
        if (s == "ATK")
        {
            ena.push_back(inp);
        }
        else
        {
            end.push_back(inp);
        }
    }
    for (int i = 0; i < m; i++)
    {
        int inp;
        cin>>inp;
        my.push_back(inp);
    }
    long long p1=0,p2=0;
    sort(ena.begin(),ena.end());
    sort(end.begin(),end.end());
    sort(my.begin(),my.end());
    n = ena.size();
    for (int i = 0; i < m; i++)
    {
        if (i<n&&my[m-i-1]>ena[i])
        {
            p1+=my[m-i-1]-ena[i];
        }
        else
        {
            break;
        }
    }
    n = end.size();
    int j = 0;
    bool flag = false;
    for (int i = 0; i < n; i++, j++)
    {
        if (j==m)
        {
            flag = true;
            break;
        }
        while (my[j]<=end[i])
        {
            myn.push_back(my[j++]);
            if (j==m)
            {
                flag = true;
                break;
            }
        }
    }
    while (j<m)
    {
        myn.push_back(my[j++]);
    }
    if (flag)
    {
        cout<<p1;
        return 0;
    }
    flag = true;
    j=0;
    m = myn.size();
    n = ena.size();
    for (int i = 0; i < n; i++,j++)
    {
        if (j == m)
        {
            flag = false;
            break;
        }
        while (myn[j]<ena[i])
        {
            p2+=myn[j++];
            if (j == m)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            p2+=myn[j]-ena[i];
        }
    }
    while (j<m)
    {
        p2+=myn[j++];
    }
    if (flag)
    {
        cout<<max(p1,p2);
    }
    else
    {
        cout<<p1;
    }
}