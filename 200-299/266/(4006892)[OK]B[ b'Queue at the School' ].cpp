#include<iostream>
using namespace std;
int main()
{
    int n, t;
    char Q[51];
    cin>>n>>t;
    cin>>Q;
    --n;
    while (t--)
    {
        for (int i = 0; i < n; i++)
        {
            if (Q[i] == 'B' && Q[i+1] == 'G')
            {
                Q[i] = 'G', Q[++i] = 'B';
            }
        }
    }
    cout<< Q;
}