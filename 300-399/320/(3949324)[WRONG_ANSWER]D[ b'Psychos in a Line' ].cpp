#include<iostream>
#include<conio.h>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,pst,now,count=0,mas,cp,mcp,ocp;
    cin>>n;
    vector<int> v(n);
    now = n;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    do
    {
        cp=0;
        pst = now;
        n=0;
        mas = 0;
        mcp=0;
        ocp=0;
        for (int i = 1, j = 1; i < now; i++)
        {
            if (v[mas]>v[i]&&v[i]>v[i-1])
            {
                v[j]=v[i];
                n++;
                mcp++;
                if (cp<mcp)
                {
                    cp = mcp;
                }
            }
            else
            {
                mcp=1;
                if (v[i-1]>v[i])
                {
                    ocp=1;
                    v[j] = v[i];
                    n++;
                    mas = i - 1;
                }
                else
                {
                    v[j++] = v[i];
                }
            }
        }
        now-=n;
        count+=cp;
    } while (pst>now);
    cout<<count;
    return 0;
}