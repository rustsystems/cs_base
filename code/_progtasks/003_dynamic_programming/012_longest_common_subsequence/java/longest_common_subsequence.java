
public class longest_common_subsequence {


    public static String LCS(String s1, String s2) {
        int len1 = s1.length();
        int len2 = s2.length();
        int [][] dp = new int[len1 + 1][len2 + 1];

        for (int i = 1; i <= len1; i++) {
            for (int j = 1; j <= len2; j++) {
                if (s1.charAt(i - 1) == s2.charAt(j - 1)) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = Math.max(
                        dp[i - 1][j],
                        dp[i][j - 1]
                    );
                }
            }
        }
        System.out.println("Printing 2D DP Array:");
        int rowLen = len1+1;
        int colLen = len2+1;
        for (int ii = 0; ii < rowLen; ii++) {
            for (int jj = 0; jj < rowLen; jj++) {
                System.out.print(dp[ii][jj] + ", ");
            }
            System.out.println("");
        }


        StringBuilder sb = new StringBuilder();
        int i = len1;
        int j = len2;
        while (i > 0 && j > 0) {
            if (s1.charAt(i - 1) == s2.charAt(j - 1)) {
                sb.append(s1.charAt(i - 1));
                i--;
                j--;
            } else if (dp[i - 1][j] > dp[i][j - 1]) {
                i--;
            } else {
                j--;
            }
        }

        return sb.reverse().toString();
    }

    public static void main(String[] args) {
        String s1 = "ABCD";
        String s2 = "ACDB";
        String lcs = longest_common_subsequence.LCS(s1, s2);
        System.out.println("The LCS of " +s1 + " and " + s2 + " is: " + lcs);
    }
}