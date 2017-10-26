#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int zero = 0, one = 1023;
    int n;
    cin>>n;
    char c;
    int num;
    for(int i = 0; i < n; ++i)
    {
        cin>>c>>num;
        if(c == '&')
        {
            zero &= num;
            one &= num;
        }
        else if(c == '|')
        {
            zero |= num;
            one |= num;
        }
        else
        {
            zero ^= num;
            one ^= num;
        }
    }
    int X = 0, A = 1023, O = 0;
    for(int i = 0; i < 10; ++i)
    {
        if(zero%2 == 0 && one%2 == 0)
        {
            A &= ~(1<<i);
        }
        else if(zero%2 == 1 && one%2 == 1)
        {
            O |= (1<<i);
        }
        else if(zero%2 == 1 && one%2 == 0)
        {
            X |= (1<<i);
        }
        zero >>= 1;
        one >>= 1;
    }
    cout<<3<<'\n';
    cout<<"^ "<<X<<'\n';
    cout<<"| "<<O<<'\n';
    cout<<"& "<<A<<'\n';
    return 0;
}
