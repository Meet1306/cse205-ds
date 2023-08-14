class Solution {
public:
    int fibo(int a, int b, int n)
    {
        int c;
        c = a + b;
        if (n == 2)
            return c;
        else if (n == 1)
            return 1;
        else if (n == 0)
            return 0;

        a = b;
        b = c;
        return fibo(a, b, n - 1);
    }
    int fib(int n) {
        int a = 0;
        int b = 1;
        return fibo(a, b, n);
        
    }
};