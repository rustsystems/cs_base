



public class shortest_common_supersequence {

    public static String SCS(String a, String b) {
        int n = a.length();
        int m = b.length();
        int[][] s = new int[n + 1][m + 1];
    
        for (int i = 0; i <= n; i++) {
            s[i][0] = 0;
        }
        for (int j = 0; j <= m; j++) {
            s[0][j] = 0;
        }
        

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (a.charAt(i - 1) == b.charAt(j-1)) {
                    s[i][j] = s[i-1][j-1] + 1;
                } else {
                    s[i][j] = Math.min(s[i-1][j], s[i][j-1]) + 1;
                }
            }
        }

        int i = n;
        int j = m;
        StringBuilder sb = new StringBuilder();
        while (i > 0 && j > 0) {
            if (a.charAt(i - 1) == b.charAt(j-1)) {
                sb.append(a.charAt(i-1));
                i--;
                j--;
            } else {
                if (s[i-1][j] < s[i][j-1]) {
                    sb.append(a.charAt(i-1));
                    i--;
                } else {
                    sb.append(b.charAt(j-1));
                    j--;
                }
            }
        }
    }

    public static void main(String[] args) {
        String a = "";
        String b = "";
        String scs = shortest_common_supersequence.SCS(a, b)
    }
}