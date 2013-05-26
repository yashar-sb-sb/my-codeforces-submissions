#include<iostream>
#include<conio.h>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;

#define LL long long
#define ULL unsigned LL

int main()
{
    double aa,bb,cc,rr;
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    aa = a/b;
    bb = c/d;
    rr=1;
    cc=0;
    for (int i = 0; i < 10000; i++)
    {
        cc+=rr*aa;
        rr *= (1-aa);
        rr *= (1-bb);
    }
    cout.precision(12);
    cout<<cc;
}