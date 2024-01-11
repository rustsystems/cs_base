

import java.util.HashMap;
import java.util.Map;

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
    
    public static int fibonacci_dp_td_memoization(int n) {
        class Fibo {
            Map<Integer, Integer> memo = new HashMap<>();
            int fibonacci(int n) {
                if (memo.containsKey(n)) return memo.get(n);
                if (n == 0) return 0;
                if (n == 1) return 1;
                if (n == 2) return 1;


                memo.put(n, fibonacci(n - 1) + fibonacci(n - 2));
                return memo.get(n);
            }
        }
        return new Fibo().fibonacci(n);
    }

    class Timer {
        private static Timer timer;
        Map<String, Time> times;
        private Timer() {
            this.timer = new Timer();
            this.times = new HashMap<>();
        }


        class Time {
            String name;
            int beginTime;
            int endTime;
        }
        static void beginTime(String name) {
            
        }
        static void endTime(String name) {
            
        }
    }

    public static void main(String args[]) {
        int n = 46;

        Integr stm = 0;

        int beg1 = System. currentTimeMillis();
        int fib_classic = classical_fibonacci_recursive(n);
        System.out.println("Classical: " + fib_classic);
        int end1 = System. currentTimeMillis();
        System.out.println("T-1: " + (end1 - beg1));
        

        int beg1 = System. currentTimeMillis();
        int fib_dp_tab = fibonacci_dp_bu_tabulation(n);
        System.out.println("DP, Tabulation: " + fib_dp_tab);


        int fib_dp_mem = fibonacci_dp_td_memoization(n);
        System.out.println("DP, Memoization: " + fib_dp_mem);

    }
}