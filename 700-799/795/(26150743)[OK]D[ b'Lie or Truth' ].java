import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // Prints "Hello, World" to the terminal window.
        Scanner sc= new Scanner(System.in);
        int n,l,r;
        n = sc.nextInt();
        l = sc.nextInt();
        r = sc.nextInt();
        int[] a, b, c;
        a = new int[n];
        b = new int[n];
        c = new int[n+1];
        for (int i = 0; i < n+1; i++)
            c[i] = 0;
        for(int i = 0; i < n; ++i)
            a[i] = sc.nextInt();
        for(int i = 0; i < n; ++i)
            b[i] = sc.nextInt();
        for(int i = l-1; i < r; ++i)
        {
            ++c[a[i]];
            --c[b[i]];
        }
        for(int i = 0; i <= n; ++i)
            if(c[i] != 0)
            {
                System.out.println("LIE");
                return;
            }
        for(int i = 0; i < l-1; ++i)
            if(a[i] != b[i])
            {
                System.out.println("LIE");
                return;
            }
        for(int i = r; i < n; ++i)
            if(a[i] != b[i])
            {
                System.out.println("LIE");
                return;
            }
        System.out.println("TRUTH");
    }

}
