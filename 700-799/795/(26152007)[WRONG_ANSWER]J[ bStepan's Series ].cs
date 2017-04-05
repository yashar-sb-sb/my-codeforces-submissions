
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
                if(i == 'N' || i == '?')
                    ++d;
                else d = 0;
                if(d>m) m = d;
            }
            Console.WriteLine(m == k ? "YES" : "NO");
        }
    }
}
