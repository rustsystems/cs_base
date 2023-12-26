
import java.util.Map;
import java.util.HashMap;

class NotImplementedException extends RuntimeException {}

public class all_the_fibs {

    public static int fibonacci_01(int n) {
        int[] memo = new int[n + 1];
        return fibonacci_01_helper(n, memo);
    }

    public static int fibonacci_01_helper(int n, int[] memo) {
        if (n <= 1) {
            return n;
        }
        if (memo[n] != 0) {
            return memo[n];
        }
        int fib = fibonacci_01_helper(n - 1, memo) + fibonacci_01_helper(n - 2, memo);
        memo[n] = fib;
        return fib;
    }

    public static int fibonacci_02(int n, int[] memo) {
        if (n <= 1) {
            return n;
        }
        if (memo[n] != 0) {
            return memo[n];
        }
        memo[n] = fibonacci_02(n - 1, memo) + fibonacci_02(n - 2, memo);
        return memo[n]; 
    }

    /**
     * Dynamic Programming, Bottom-up, Tabulation Approach to Fibonacci...
     */
    public static int fibonacci_03(int n) {
        if (n <= 1) {
            return n;
        } 
        int[] memo = new int[n + 1];
        memo[0] = 0;
        memo[1] = 1;
        for (int i = 2; i <= n; i++) {
            memo[i] = memo[i - 1] + memo[i - 2];
        }
        return memo[n];
    }

    public static class Fibonacci_04 {
        static Map<Integer, Integer> memo = new HashMap<>();
        public static int fibonacci_04(int n) {
            if (n <= 1) {
                return n;
            } else if (memo.containsKey(n)) {
                return memo.get(n);
            } else {
                int result = fibonacci_04(n - 1) + fibonacci_04(n - 2);
                memo.put(n, result);
                return result;
            }
        }
    }

    public static int fibonacci_05(int n) {        
        if (n == 0) {
            return 0;
        }
        if (n == 1 || n == 2) {
            return 1;
        }
        int[] fib = new int[n + 1];
        fib[1] = 1;
        fib[2] = 1;
        for (int i = 3; i <= n; i++) {
            fib[i] = fib[i-1] + fib[i-2];
        }
        return fib[n];
    }
    
    public static int fibonacci_06(int n) {
        // System.out.println("\t 06-n: " + n);
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return 1;
        } else {    
            return fibonacci_06(n - 1) + fibonacci_06(n - 2);
        }
    }
    
    public static int fibonacci_07(int n) {        
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return 1;
        }

        int[] memo = new int[n + 1];
        memo[0] = 0;
        memo[1] = 1;
        for (int i = 2; i <= n; i++) {
            memo[i] = memo[i - 1] + memo[i - 2];
        }
        return memo[n];
    }
    
    public static int fibonacci_08(int n) {
        if (n <= 1) {
            return n;
        }
        return fibonacci_08(n - 1) + fibonacci_08(n - 2);
    }

    public static int fibonacci_09(int n) {        
        if (n <= 1) {
            return n;
        }
        int[] memo = new int[n + 1];
        memo[0] = 0;
        memo[1] = 1;
        for (int i = 2; i <= n; i++) {
            memo[i] = memo[i - 1] + memo[i - 2];
        }
        return memo[n];
    }
    
    public static class FibonacciDP_10 {
        private static Map<Integer, Integer> memo = new HashMap<>();
        public static int fibonacci_10(int n) {
            if (n <= 1) {
                return n;
            } 
            if (memo.containsKey(n)) {
                return memo.get(n);
            }
            int result = fibonacci_10(n - 1) + fibonacci_10(n - 2);
            memo.put(n, result);
            return result;
        }
    }
    
    public static int fibonacci_11(int n) {
        int[] cache = new int[n +1];
        return fibonacci_11_Sub(n, cache);
    }
    
    public static int fibonacci_11_Sub(int n, int[] cache) {
        if (n < 2) {
            return n;
        }
        if (cache[n] != 0) {
            return cache[n];
        }
        int result = fibonacci_11_Sub(n - 1, cache) + fibonacci_11_Sub(n - 2, cache);
        cache[n] = result;
        return cache[n];
    }

    public static int fibonacci_12(int n) {
        int[] memo = new int[n + 1];
        memo[0] = 0;
        memo[1] = 1;
        for (int i = 2; i <= n; i++) {
            memo[i] = memo[i - 1] + memo[i - 2];
        }
        return memo[n];
    }
    
    public static int fibonacci_13(int n, int[] memo) {
        if (memo[n] != 0) {
            return memo[n];
        }
        if (n == 1 || n == 2) {
            return 1;
        }
        memo[n] = fibonacci_13(n - 1, memo) + fibonacci_13(n - 2, memo);
        return memo[n];
    }
    
    public static int fibonacci_14(int n) {
        if (n == 1 || n == 2) {
            return 1;
        }
        // Cache is referred to as DP
        int[] cache = new int[n + 1];
        cache[1] = 1;
        cache[2] = 1;
        for (int i = 3; i <= n; i++) {
            cache[i] = cache[i - 1] + cache[i - 2];
        }
        return cache[n];
    }
    
    public static int fibonacci_15(int n) {    
        if (n == 0) return 0;
        if (n == 1) return 1;
        return fibonacci_15(n - 1) + fibonacci_15(n - 2);    
    }
    
    public static int fibonacci_16(int n) {
        return fibonacci_16_DP(n);
    }

    public static int fibonacci_16_DP(int n) {
        int[] memo = new int[n + 1];
        return fibonacci_16_Memo(n, memo);
    }
    
    public static int fibonacci_16_Memo(int n, int[] memo) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        if (memo[n] != 0) {
            return memo[n];
        }
        memo[n] = fibonacci_16_Memo(n - 1, memo) + fibonacci_16_Memo(n - 2, memo);
        return memo[n];
    }

    public static int fibonacci_17(int n) {
        /**
         * Fib(n) = Fib(n-1) + Fib(n-2), for n >= 2
         * Fib(0) = 0
         * Fib(1) = 1
         */
        class Fibonacci {
            private int[] memo = new int[100];
            public int fib(int n) {
                if (n == 0) return 0;
                if (n == 1) return 1;

                if (memo[n] != 0) {
                    return memo[n];
                }
                int result = fib(n - 1) + fib(n - 2);
                memo[n] = result;
                return memo[n];
            }
        }
        return new Fibonacci().fib(n);
    }
    
    public static int fibonacci_BCA_01(int n) {
        return -1;
    }

    public static void main(String args[]) { 
        int n = 10;
        int nn = 0;
        Integer nnn = null;

        // 01
        nnn = n + nn++;
        int fibonacci_01_result = all_the_fibs.fibonacci_01(nnn);
        System.out.println("Fibonacci-01 (" + nnn +  "): " + fibonacci_01_result);
        

        nnn = n + nn++;
        int[] fib2_memo = new int[nnn + 1];
        int fibonacci_02_result = all_the_fibs.fibonacci_02(nnn, fib2_memo);
        System.out.println("Fibonacci-02 (" + nnn +  "): " + fibonacci_02_result);
        

        nnn = n + nn++;
        int fibonacci_03_result = all_the_fibs.fibonacci_03(nnn);
        System.out.println("Fibonacci-03 (" + nnn +  "): " + fibonacci_03_result);
        

        nnn = n + nn++;
        int fibonacci_04_result = all_the_fibs.Fibonacci_04.fibonacci_04(nnn);
        System.out.println("Fibonacci-04 (" + nnn +  "): " + fibonacci_04_result);


        nnn = n + nn++;
        int fibonacci_05_result = all_the_fibs.fibonacci_05(nnn);
        System.out.println("Fibonacci-05 (" + nnn +  "): " + fibonacci_05_result);


        nnn = n + nn++;
        int fibonacci_06_result = all_the_fibs.fibonacci_06(nnn);
        System.out.println("Fibonacci-06 (" + nnn +  "): " + fibonacci_06_result);


        nnn = n + nn++;
        int fibonacci_07_result = all_the_fibs.fibonacci_07(nnn);
        System.out.println("Fibonacci-07 (" + nnn +  "): " + fibonacci_07_result);


        nnn = n + nn++;
        int fibonacci_08_result = all_the_fibs.fibonacci_08(nnn);
        System.out.println("Fibonacci-08 (" + nnn +  "): " + fibonacci_08_result);


        nnn = n + nn++;
        int fibonacci_09_result = all_the_fibs.fibonacci_09(nnn);
        System.out.println("Fibonacci-09 (" + nnn +  "): " + fibonacci_09_result);


        nnn = n + nn++;
        int fibonacci_10_result = all_the_fibs.FibonacciDP_10.fibonacci_10(nnn);
        System.out.println("Fibonacci-10 (" + nnn +  "): " + fibonacci_10_result);


        nnn = n + nn++;
        int fibonacci_11_result = all_the_fibs.fibonacci_11(nnn);
        System.out.println("Fibonacci-11 (" + nnn +  "): " + fibonacci_11_result);


        nnn = n + nn++;
        int fibonacci_12_result = all_the_fibs.fibonacci_12(nnn);
        System.out.println("Fibonacci-12 (" + nnn +  "): " + fibonacci_12_result);


        nnn = n + nn++;
        int[] m = new int[nnn + 1];
        int fibonacci_13_result = all_the_fibs.fibonacci_13(nnn, m);
        System.out.println("Fibonacci-13 (" + nnn +  "): " + fibonacci_13_result);


        nnn = n + nn++;
        int fibonacci_14_result = all_the_fibs.fibonacci_14(nnn);
        System.out.println("Fibonacci-14 (" + nnn +  "): " + fibonacci_14_result);


        nnn = n + nn++;
        int fibonacci_15_result = all_the_fibs.fibonacci_15(nnn);
        System.out.println("Fibonacci-15 (" + nnn +  "): " + fibonacci_15_result);


        nnn = n + nn++;
        int fibonacci_16_result = all_the_fibs.fibonacci_16(nnn);
        System.out.println("Fibonacci-16 (" + nnn +  "): " + fibonacci_16_result);


        nnn = n + nn++;
        int fibonacci_17_result = all_the_fibs.fibonacci_17(nnn);
        System.out.println("Fibonacci-17 (" + nnn +  "): " + fibonacci_17_result);
    }
}