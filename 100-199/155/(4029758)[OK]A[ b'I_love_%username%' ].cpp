#include<iostream>
using namespace std;
int main()
{
    int n,max,min,cur,cou=0;
    cin>>n>>max;
    min = max;
    while (--n)
    {
        cin>>cur;
        if (cur>max)
        {
            max = cur;
            ++cou;
        }
        else if (cur < min)
        {
            min = cur;
            ++cou;
        }
    }
    cout << cou;
}