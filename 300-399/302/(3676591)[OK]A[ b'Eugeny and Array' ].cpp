#include<iostream>
#include<conio.h>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int n,m,inp,inp1,inp2;
    cin>>n>>m;
    int minOne=0,plusOne=0;
    for (int i = 0; i < n; i++)
    {
        cin>>inp;
        if (inp>0)
        {
            plusOne++;
        }
        else if (inp<0)
        {
            minOne++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin>>inp1>>inp2;
        int t = min(plusOne,minOne);
        if ((inp2-inp1)%2&&inp2-inp1<=2*min(plusOne,minOne))
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}