#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    char c,d;
    cin>>c>>d;
    cout<<(2+(c!='a'&&c!='h'))*(2+(d!='1'&&d!='8'))-1<<endl;
    return 0;
}
