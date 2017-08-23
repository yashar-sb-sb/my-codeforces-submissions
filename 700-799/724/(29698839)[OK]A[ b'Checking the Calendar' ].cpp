#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string week[7] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s, t;
    cin>>s>>t;
    int first, second;
    for(int i = 0; i < 7; ++i)
    {
        if(s == week[i])
            first = i;
        if(t == week[i])
            second = i;
    }
    for(int i = 0; i < 12; ++i)
    {
        if(months[i]%7 == (second-first+7)%7)
            return cout<<"YES"<<endl, 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
