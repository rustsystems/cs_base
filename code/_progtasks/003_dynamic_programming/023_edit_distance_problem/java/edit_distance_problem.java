


public class edit_distance_problem {

    public static void Print2DArray(int arr[][], int rows, int cols) {
        System.out.println("Printing 2D DP Array:");
        for (int ii = 0; ii < rows; ii++) {
            for (int jj = 0; jj < cols; jj++) {
                System.out.print(arr[ii][jj] + ", ");
            }
            System.out.println("");
        }
    }
    public static int ED(String word1, String word2) {
        int m = word1.length();
        int n = word2.length();

        int[][] dp = new int[m+1][n+1];

        for (int i = 0; i <= m; i++) {
            dp[i][0] = i;
        }

        for (int i = 0; i <= n; i++) {
            dp[0][i] = i;
        }
        edit_distance_problem.Print2DArray(dp, m+1, n+1);
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (word1.charAt(i-1) == word2.charAt(j-1)) {
                    dp[i][j] = dp[i-1][j-1];
                } else {
                    dp[i][j] = Math.min(
                        dp[i-1][j], 
                        Math.min(
                            dp[i][j-1], 
                            dp[i-1][j-1])) + 1;
                }
            }
        }
        edit_distance_problem.Print2DArray(dp, m+1, n+1);

        return dp[m][n];
    }

    public static void main(String args[]) {
        int edit_distance_results = edit_distance_problem.ED("kitten", "sitting");
        System.out.println("Distance is " + edit_distance_results);

    }
}