#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<vector<int>> T(1,vector<int>(11));
vector<int> A[70000];

void add(vector<int> v)
{
    unordered_set<int> se;
    for(int i = 0; i < 9; ++i)
    {
        int ind = 0;
        for(int j = i; j < 9; ++j)
        {
            if(!T[ind][v[j]])
            {
                T[ind][v[j]] = T.size();
                T.push_back(vector<int>(11));
            }
            ind = T[ind][v[j]];
            if(!se.count(ind))
            {
                ++T[ind][10];
                se.insert(ind);
            }
        }
    }
}

void ask(vector<int> v)
{
    int len = 9;
    int start = 0;
    for(int i = 0; i < 9; ++i)
    {
        int ind = 0;
        for(int j = i; j < 9; ++j)
        {
            ind = T[ind][v[j]];
            if(T[ind][10] == 1)
            {
                if(len > j-i+1)
                {
                    len = j-i+1;
                    start = i;
                }
            }
        }
    }
    for(int i = 0; i < len; ++i)
        cout<<v[start+i];
    cout<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        A[i] = vector<int>(9);
        for(int j = 0; j < 9; ++j)
        {
            char c;
            cin>>c;
            A[i][j] = c - '0';
        }
        add(A[i]);
    }
    for(int i = 0; i < n; ++i)
        ask(A[i]);
    return 0;
}
