#include<iostream>
using namespace std;
int main()
{
    int c=1,cc=1,n,cur,pre,m;
    cin >>n;
    cin>>pre>>m;
    pre = pre*60+m;
    while (--n)
    {
        cin>>cur>>m;
        cur = cur*60+m;
        if (cur == pre)
        {
            ++cc;
            if (cc>c)
            {
                c = cc;
            }
        }
        else
        {
            cc = 1;
        }
        pre = cur;
    }
    cout<<c;
}