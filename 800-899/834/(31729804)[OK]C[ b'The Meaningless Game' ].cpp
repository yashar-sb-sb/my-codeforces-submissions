#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool O[100000];
vector<int> primes;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    for(int i = 2; i < 100000; ++i)
    {
        if(!O[i])
        {
            primes.push_back(i);
            if(i < 1000)
            {
                for(int j = i*i; j < 100000; j += i)
                    O[j] = true;
            }
        }
    }
    int n;
    cin>>n;
    int a, b;
    while(n--)
    {
        cin>>a>>b;
        bool can = true;
        for(int p:primes)
        {
            if(p*p*p>a && p*p*p > b)
                break;
            int A = 0;
            while(a%p == 0)
            {
                ++A;
                a /= p;
            }
            int B = 0;
            while(b%p == 0)
            {
                ++B;
                b /= p;
            }
            while(A>0 || B>0)
            {
                if(A > B)
                    swap(A, B);
                B -= 2;
                --A;
            }
            if(A!=0 || B!=0)
            {
                can = false;
                break;
            }
        }
        if(a > b)
            swap(a, b);
        if(can && (a > 1 || b > 1))can = LL(a)*LL(a) == LL(b);
        cout<<(can ? "yes" : "no")<<'\n';
    }
    return 0;
}
