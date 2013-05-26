#include<iostream>
#include<conio.h>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

#define LL long long
#define ULL unsigned LL

int main()
{
    int n;
    bool Rainbow, Freda;
    char str[101];
    cin>>n;
    cin.getline(str,101,'\n');
    for (int i = 0; i < n; i++)
    {
        cin.getline(str,101,'\n');
        int len = strlen(str);
        if(len<5)
        {
            cout<<"OMG>.< I don't know!"<<endl;
            continue;
        }
        Rainbow = Freda = false;
        for (int j = 0; j < 5; j++)
        {
            if ("miao."[j] !=str[j])
            {
                break;
            }
            if (j==4)
            {
                Rainbow = true;
            }
        }
        for (int j = len-5; j < len; j++)
        {
            if ("lala."[j-len+5] !=str[j])
            {
                break;
            }
            if (j==len-1)
            {
                Freda = true;
            }
        }
        if (Freda && Rainbow)
        {
            cout<<"OMG>.< I don't know!"<<endl;
            continue;
        }
        if (Rainbow)
        {
            cout<<"Rainbow's"<<endl;
            continue;
        }
        if (Freda)
        {
            cout<<"Freda's"<<endl;
            continue;
        }
        cout<<"OMG>.< I don't know!"<<endl;
    }
}