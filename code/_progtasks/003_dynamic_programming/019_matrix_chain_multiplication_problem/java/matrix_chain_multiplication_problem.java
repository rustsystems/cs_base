import java.util.Arrays;

public class matrix_chain_multiplication_problem {

    public static int[] MCM(int[] p) {
        int n = p.length - 1;
        int[][] m = new int[n][n];
        int[][] s = new int[n][n];

        for (int i = 0; i < n; i++) {
            m[i][i] = 0;
        }

        for (int len = 2; len <= n; len++) {
            for (int i = 0; i < n - len + 1; i++) {
                int j = i + len - 1;
                m[i][j] = Integer.MAX_VALUE;
                for (int k = i; k < j; k++) {
                    int q = m[i][k] + m[k+1][j] + p[i]*p[k+1]*p[j+1];
                    if (q < m[i][j]) {
                        m[i][j] = q;
                        s[i][j] = k;
                    }
                }
            }
        }

        int[] order = new int[n];
        int index = 0;
        int i = 0;
        int j = n - 1;
        while (i < j) {
            order[index++] = s[i][j];
            if (s[i][j] >= i+1) {
                order[index++] = s[i][j] - 1;
            }
            i = s[i][j] + 1;
        }
        order[index] = n - 2;

        return order;
    }

    public static void main(String args[]) {
        int[] p = {10, 20, 30, 40, 30};
        int[] order = matrix_chain_multiplication_problem.MCM(p);
        System.out.println(Arrays.toString(order));
    }
}