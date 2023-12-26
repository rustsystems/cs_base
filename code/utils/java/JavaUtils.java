

public class JavaUtils {
    public static void Print2DArray(int arr[][], int rows, int cols) {
        System.out.println("Printing 2D DP Array:");
        for (int ii = 0; ii < rows; ii++) {
            for (int jj = 0; jj < cols; jj++) {
                System.out.print(dp[ii][jj] + ", ");
            }
            System.out.println("");
        }
    }
}