#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[26];

int main()
{
    ios_base::sync_with_stdio(0);
    string s;
    cin>>s;
    int n = s.size();
    for(int i = 0; i < n-25; ++i)
    {
        memset(A, 0, sizeof(A));
        bool can = true;
        for(int j = 0; j < 26; ++j)
        {
            if(s[i+j] != '?')
            {
                if(!A[s[i+j] - 'A'])
                    A[s[i+j] - 'A'] = 1;
                else
                {
                    can = false;
                    break;
                }
            }
        }
        if(can)
        {
            for(int j = 0; j < 26; ++j)
            {
                if(!A[j])
                {
                    for(int k = 0; k < 26; ++k)
                        if(s[i+k] == '?')
                        {
                            s[i+k] = j + 'A';
                            A[j] = 1;
                            break;
                        }
                }
            }
            for(int j = 0; j < n; ++j)
                if(s[j] == '?')
                    s[j] = 'A';
            cout<<s<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
