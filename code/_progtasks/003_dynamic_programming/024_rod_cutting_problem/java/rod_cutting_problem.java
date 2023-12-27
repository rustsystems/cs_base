


public class rod_cutting_problem {

    public static int RC(int n, int[] price) {
        int[] R = new int[n + 1];
        R[0] = 0;

        for (int i = 1; i <= n; i++) {
            int maxVal = Integer.MIN_VALUE;
            for (int j = 1; j <= i; j++) {
                maxVal = Math.max(maxVal, price[j] + R[i-j]);
            }
            R[i] = maxVal;
        }
        return R[n];
    }

    public static void main(String args[]) {
        int[] price = {0, 1, 5, 8, 9, 10, 17, 17, 20};
        int rod_cutting_results = rod_cutting_problem.RC(8, price);
        System.out.println("Rod Cutting Results: " + rod_cutting_results);
    }
}