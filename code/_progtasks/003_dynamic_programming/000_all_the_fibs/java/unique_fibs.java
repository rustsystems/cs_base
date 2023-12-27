


public class unique_fibs {
    public static int classical_fibonacci_recursive(int n) {
        class Fibo {
            int fibonacci(int n) {
                if (n == 0) {
                    return 0;
                } else if (n == 1) {
                    return 1;
                } else {
                    return fibonacci(n-1) + fibonacci(n-2);
                }
            }
        }
        return new Fibo().fibonacci(n);
    }

    public static int fibonacci_dp_bu_tabulation(int n) {
        class Fibo {
            int fibonacci(int n) {
                int[] fibs = new int[n+1];
                fibs[0] = 0;
                fibs[1] = 1;
                for (int i = 2; i <= n; i++) {
                    fibs[i] = fibs[i-1] + fibs[i - 2];
                }
                return fibs[n];
            }
        }
        return new Fibo().fibonacci(n);
    }
    // fibonacci_dp_td_memoization()

    public static void main(String args[]) {
        int fib_classic = classical_fibonacci_recursive(10);
        System.out.println("Classical: " + fib_classic);

        int fib_dp_tab = fibonacci_dp_bu_tabulation(10);
        System.out.println("DP, Tabulation: " + fib_dp_tab);
    }
}