#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool used[3];
int digits[3][6];
int n;
int num;
bool A[1000];

void f()
{
    int save = num;
    for(int i = 0; i < n; ++i)
        if(!used[i])
        {
            used[i] = true;
            for(int j = 0; j < 6; ++j)
            {
                num = save * 10 + digits[i][j];
                A[num] = true;
                f();
            }
            used[i] = false;
        }
    num = save;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < 6; ++j)
            cin>>digits[i][j];
    f();
    for(int i = 1;; ++i)
        if(!A[i])
        {
            cout<<i-1<<endl;
            break;
        }
    return 0;
}
