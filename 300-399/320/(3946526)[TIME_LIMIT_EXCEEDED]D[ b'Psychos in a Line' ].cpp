#include<iostream>
#include<conio.h>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,pst,now,count=-1;
    cin>>n;
    vector<int> v(n);
    now = n;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    do
    {
        count++;
        pst = now;
        n=0;
        for (int i = 1, j = 1; i < now; i++)
        {
            if (v[i-1]>v[i])
            {
                v[j] = v[i];
                n++;
            }
            else
            {
                v[j++] = v[i];
            }
        }
        now-=n;
    } while (pst>now);
    cout<<count;
    return 0;
}