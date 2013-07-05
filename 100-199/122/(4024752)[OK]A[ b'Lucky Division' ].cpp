#include<iostream>
using namespace std;
int n;
bool is(int l)
{
    if (l>n+1)
    {
        return false;
    }
    if (!(n%l))
    {
        return true;
    }
    return is(l*10+4) || is(l*10+7);
}
int main()
{
    cin >> n;
    if (is(4) || is(7))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}