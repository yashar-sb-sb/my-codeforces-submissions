#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    std::string input;
    int n;
    std::cin>>n;
    for (int i = 0; i < n; i++)
    {
        std::stringstream ss;
        std::cin>>input;
        if (input[0] == 'R'&&isdigit(input[1])&&input.find('C')!=string::npos)
        {
            ss.str(input);
            char c;
            ss>>c;
            int R;
            ss>>R;
            ss>>c;
            int C;
            ss>>C;
            ss.str("");
            ss.clear();
            input = ss.str();
            while (C>0)
            {
                if (!(C%26))
                {
                    ss<<'A';
                    C--;
                }
                else
                {
                    ss<<(char)(C%26+'A'-1);
                }
                C/=26;
            }
            input = ss.str();
            for (int j = input.size()-1; j >= 0 ; j--)
            {
                cout<<input[j];
            }
            cout<<R<<endl;
        }
        else
        {
            ss.str("");
            ss.clear();
            for (int j = 0; j < input.size(); j++)
            {
                if (isalpha(input[j]))
                {
                    ss<<input[j];
                }
                else
                {
                    break;
                }
            }
            string Cs = ss.str();
            ss.str("");
            ss.clear();
            for (int j = 0; j < input.size(); j++)
            {
                if (isdigit(input[j]))
                {
                    ss<<input[j];
                }
            }
            int R;
            ss>>R;
            int C=0;
            int w=1;
            for (int j = Cs.size()-1; j >= 0; j--)
            {
                C+=(Cs[j]-'A'+1)*w;
                w*=26;
            }
            cout<<"R"<<R<<"C"<<C<<endl;
        }
    }
}