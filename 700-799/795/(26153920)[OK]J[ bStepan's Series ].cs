
using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            int n,k;
            string s;
            var t = Console.ReadLine().Split(' ');
            n = int.Parse(t[0]);
            k = int.Parse(t[1]);
            s = Console.ReadLine();
            int m = 0, d = 0;
            foreach (var i in s)
            {
                if(i == 'N')
                    ++d;
                else d = 0;
                if(d>m) m = d;
            }
            if(m > k)
                {Console.WriteLine("NO");return;}
            s = "Y"+s+"Y";
            n = s.Length;
            for(int i = 1; i < n-k; ++i)
            {
                bool tr = s[i-1] != 'N' && s[i+k] != 'N';
                for(int j = 0; j < k; ++j)
                {
                    if(s[j+i] == 'Y') tr = false;
                }
                if(tr)
                {
                    Console.WriteLine("YES");
                    return;
                }
            }
            Console.WriteLine("NO");

        }
    }
}
