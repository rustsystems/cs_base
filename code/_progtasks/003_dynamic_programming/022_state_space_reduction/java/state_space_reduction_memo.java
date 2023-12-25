


public class state_space_reduction_factorial {
    public static int fac(int n, int[] memo) {
        if (n <= 1) {
            return 1;
        } else if (memo[n] != 0) {
            return memo[n];
        } else {
            int res = n * fac(n - 1, memo);
            memo[n] = res;
            return res;
        }
    }

    public static void main(String args[]) {
        int n = 6;
        int[] memo = new int[n + 1];
        int fac = state_space_reduction_factorial.fac(n, memo);

        System.out.println("Factorial of n: " + n + " is: " + fac);
    }
}