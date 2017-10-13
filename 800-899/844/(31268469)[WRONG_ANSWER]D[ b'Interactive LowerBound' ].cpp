#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n, start, x;
int best = -1;
int all = 1999;
bool bag[50001];
void go()
{
    int ind = 0;
    for(int i = 0; i < 10 && bag[ind]; ++i)
        ind = rand()%n + 1;
    int count = n+1;
    while(bag[ind] && count--)
        ind = ind%n+1;
    if(count<0)
        return;
    bag[ind] = true;
    --all;
    cout<<"? "<<ind<<endl;
    int val, nex;
    cin>>val>>nex;
    if(val <= x && val > best)
    {
        start = ind;
        best = val;
    }
    else if(nex != -1)
        bag[nex] = true;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    srand(1e9+7);
    bag[0] = true;
    cin>>n>>start>>x;
    bag[start]= true;
    for(int i = 0; i < 100; ++i)
        go();
    while(best < x && start != -1 && --all)
    {
        cout<<"? "<<start<<endl;
        int val, nex;
        cin>>val>>nex;
        start = nex;
        best = val;
    }
    cout<<"! ";
    if(best < x)
        cout<<-1<<endl;
    else
        cout<<best<<endl;
    return 0;
}
