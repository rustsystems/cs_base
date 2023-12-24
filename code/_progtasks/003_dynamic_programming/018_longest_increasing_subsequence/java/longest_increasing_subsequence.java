


public class longest_increasing_subsequence {
    public static int LIS(int[] nums) {
        int l = nums.length;
        int[] lis = new int[l];
        lis[0] = 1;
        int maxLength = 1;
        for (int i = 1; i < nums.length; i++) {
            int maxVal = 0;
            for (int j = 0; j < i; j++) {
                if (nums[j] < nums[i]) {
                    maxVal = Math.max(maxVal, lis[j]);
                }
            }
            lis[i] = maxVal + 1;
            maxLength = Math.max(maxLength, lis[i]);
        }
        return maxLength;
    }

    public static void main(String args[]) {
        int[] n = {1, 3, 2, 2, 3, 3, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 2, 3, 2, 3, 2, 3, 4, 3, 2, 5, 2, 2, 3, 5, 3, 4, 2, 5, 2, 3, 4, 4, 4, 4, 3, 2, 1};
        int lis = longest_increasing_subsequence.LIS(n);
        System.out.println("LIS: " + lis);
    }
}