#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[201];
pii M[20000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        memset(A, 0, sizeof(A));
        for(int i = 0; i < m; ++i)
        {
            cin>>M[i].first>>M[i].second;
            ++A[M[i].first];
            --A[M[i].second];
        }
        bool flag;
        do
        {
            flag = false;
            for(int i = 0; i < m; ++i)
            {
                if(A[M[i].first]&&A[M[i].second])
                {
                    if(A[M[i].first] == 2 || A[M[i].second] == -2 || A[M[i].first] - A[M[i].second] >= 3)
                    {
                        A[M[i].first] -= 2;
                        A[M[i].second] += 2;
                        swap(M[i].first, M[i].second);
                        flag = true;
                    }
                }
            }
        }
        while(flag);
        int count = 0;
        for(int i = 1; i<= n; ++i)
            count += !A[i];
        cout<<count<<'\n';
        for(int i = 0; i < m; ++i)
            cout<<M[i].first<<' '<<M[i].second<<'\n';
    }
    return 0;
}
