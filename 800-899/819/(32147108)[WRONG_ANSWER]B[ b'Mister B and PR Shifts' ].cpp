#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

unordered_map<int, int> numbers;
int A[1000001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    int szI = 0;
    int szD = 0;
    int inp;
    LL cur = 0;
    for(int i = 1; i <= n; ++i)
    {
        cin>>inp;
        A[i] = inp;
        cur += abs(i-inp);
        ++numbers[i-inp];
        if(inp<i)
            ++szD;
        else
            ++szI;
    }
    --szI;
    --numbers[1-A[1]];
    LL best = 0, ans = cur;
    for(int i = 1; i < n; ++i)
    {
        cur += abs(A[i]-n) - abs(A[i]-1);
        cur -= szD;
        cur += szI;
        szD -= numbers[i];
        szI += numbers[i];
        ++numbers[i-A[i]];
        if(A[i]==n)
            ++szI;
        else
            ++szD;
        --numbers[i+1-A[i+1]];
        --szI;
        if(cur<ans)
        {
            ans = cur;
            best = n-i;
        }
    }
    cout<<ans<<' '<<best<<endl;
    return 0;
}
