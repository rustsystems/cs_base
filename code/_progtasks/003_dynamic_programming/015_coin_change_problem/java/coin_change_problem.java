
import java.util.Arrays;

public class coin_change_problem {

    public static int coin_change(int coins[], int amount) {
        int[] minCoins = new int[amount + 1];
        Arrays.fill(minCoins, Integer.MAX_VALUE);
        minCoins[0] = 0;

        for (int i = 1; i <= amount; i++) {
            for (int coin : coins) {
                if (coin <= i && minCoins[i - coin] != Integer.MAX_VALUE) {
                    minCoins[i] = Math.min(minCoins[i], 1 + minCoins[i - coin]);
                }
            }
        }
        
        for (int mc : minCoins) {

            System.out.println(mc);
        }
        return minCoins[amount] == Integer.MAX_VALUE ? -1 : minCoins[amount];
    }


    public static void main(String args[]) {
        int[] c = new int[]{1, 5, 10};
        int cc = coin_change_problem.coin_change(c, 600);
        System.out.println("Coins for amount: ");
        System.out.println(cc);
    }
}