
public class longest_palindromic_subsequence {


    public static int LPS(String s) {
        int n = s.length();
        int[][] table = new int[n][n];

        for (int i = 0; i < n; i++) {
            table[i][i] = 1;
        }

        for (int len = 2; len <= n; len++) {
            for (int i = 0; i < n - len + 1; i++) {
                int j = i + len - 1;
                if (s.charAt(i) == s.charAt(j) && len == 2) {
                    table[i][j] = 2;
                } else if (s.charAt(i) == s.charAt(j)) {
                    table[i][j] = table[i + 1][j - 1] + 2;
                } else {
                    table[i][j] = Math.max(table[i + 1][j], table[i][j - 1]);
                }
            }
        }

        return table[0][n - 1];
    }

    public static void main(String args[]) {
        int lps = longest_palindromic_subsequence.LPS("ABBDCACB");
        System.out.println("The LPS is: " + lps);
    }
}