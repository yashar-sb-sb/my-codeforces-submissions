#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100001][3];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    int w, h;
    cin>>n>>w>>h;
    unordered_map<int, vector<int>> left, right;
    for(int i = 1; i <= n; ++i)
    {
        cin>>A[i][0]>>A[i][1]>>A[i][2];
        if(A[i][0] == 1)
            right[A[i][1]-A[i][2]].push_back(A[i][1]);
        else
            left[A[i][1]-A[i][2]].push_back(A[i][1]);
    }
    for(auto it = left.begin(); it != left.end(); ++it)
        sort(it->second.begin(), it->second.end());
    for(auto it = right.begin(); it != right.end(); ++it)
        sort(it->second.begin(), it->second.end());
    for(int i = 1; i <= n; ++i)
    {
        int g = A[i][0], p = A[i][1], t = A[i][2];
        if(g == 1)
        {
            vector<int> &own = right[p-t], &other = left[p-t];
            int ind = lower_bound(own.begin(), own.end(), p) - own.begin();
            int rem = own.size() - ind -1;
            if(rem < int(other.size()))
            {
                cout<<w<<' '<<other[rem]<<'\n';
            }
            else
            {
                cout<<own[ind+int(other.size())]<<' '<<h<<'\n';
            }
        }
        else
        {
            vector<int> &own = left[p-t], &other = right[p-t];
            int ind = lower_bound(own.begin(), own.end(), p) - own.begin();
            int rem = own.size() - ind -1;
            if(rem < int(other.size()))
            {
                cout<<other[rem]<<' '<<h<<'\n';
            }
            else
            {
                cout<<w<<' '<<own[ind+int(other.size())]<<'\n';
            }
        }
    }
    return 0;
}
