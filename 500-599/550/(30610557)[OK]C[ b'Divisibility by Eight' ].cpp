#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    cin>>s;
    int n = s.size(), ans;
    for(int i = 0; i < n; ++i)
    {
        stringstream ss;
        ss<<s[i];
        ss>>ans;
        if(ans % 8 == 0)
        {
            cout<<"YES"<<endl;
            cout<<ans<<endl;
            return 0;
        }
        if(s[i]!='0')
        for(int j = i+1; j < n; ++j)
        {
            stringstream ss;
            ss<<s[i]<<s[j];
            ss>>ans;
            if(ans % 8 == 0)
            {
                cout<<"YES"<<endl;
                cout<<ans<<endl;
                return 0;
            }
            for(int k = j+1; k < n; ++k)
            {
                stringstream ss;
                ss<<s[i]<<s[j]<<s[k];
                ss>>ans;
                if(ans % 8 == 0)
                {
                    cout<<"YES"<<endl;
                    cout<<ans<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
