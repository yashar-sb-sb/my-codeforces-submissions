#include<iostream>
using namespace std;
int main()
{
    int p[101],t,n;
    cin >> n;
    ++n;
    for (int i = 1; i < n; ++i)
    {
        cin >> t;
        p[t] = i;
    }
    for (int i = 1; i < n; i++)
    {
        cout << p[i] << ' ';
    }
    return 0;
}