#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100][100];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m, k;
    cin>>n>>m>>k;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin>>A[i][j];
    int maxScore = 0, minReplace = 0;
    for(int col = 0; col < m; ++col)
    {
        int score = 0, countDel = 0, curMaxScore = 0;
        for(int i = n-1; i >= 0; --i)
        {
            score += A[i][col];
            countDel += A[i][col];
            if(i+k < n)
                score -= A[i+k][col];
            if(score >= curMaxScore)
            {
                curMaxScore = score;
                countDel = 0;
            }
        }
        maxScore += curMaxScore;
        minReplace += countDel;
    }
    cout<<maxScore<<' '<<minReplace<<endl;
    return 0;
}
