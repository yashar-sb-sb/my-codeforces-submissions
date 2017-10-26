#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char A[1000001];
char T[1000001];
bool M[256];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin>>n>>k;
    cin>>A;
    for(int i = n-1; i >= 0; --i)
    {
        if(!M[int(A[i])])
        {
            T[i] = '-';
            M[int(A[i])] = 1;
        }
    }
    set<char> se;
    for(int i = 0; i < n; ++i)
    {
        se.insert(A[i]);
        if(int(se.size()) > k)
            return cout<<"yes"<<endl, 0;
        if(T[i] == '-')
            se.erase(A[i]);
    }
    cout<<"no"<<endl;
    return 0;
}
