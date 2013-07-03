#include<iostream>
using namespace std;
int main()
{
    int count=0,n,h,a,A[30][2];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>A[i][0]>>A[i][1];
    }
    int l = n-1;
    for (int i = 0; i < l; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (A[i][0] == A[j][1] || A[i][1] == A[j][0])
            {
                ++count;
            }
        }
    }
    cout << count;
}