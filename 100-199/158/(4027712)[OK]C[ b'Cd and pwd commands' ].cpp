#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string d="/",c;
    int n;
    cin>>n;
    while (n--)
    {
        cin>>c;
        if (c == "cd")
        {
            cin>>c;
            int i=-1;
            if (c[0] == '/')
            {
                d = "";
            }
            int l = c.length();
            while (++i<l)
            {
                if (c[i] == '.')
                {
                    i+=2;
                    d.pop_back();
                    while (d.back()!='/')
                    {
                        d.pop_back();
                    }
                }
                else
                {
                    d.push_back(c[i]);
                }
            }
            if (d.back()!='/')
            {
                d.push_back('/');
            }
        }
        else
        {
            cout<<d<<endl;
        }
    }
}