




public class knapsack_problem {
    static class Item {
        String item;
        int weight;
        int value;

        public Item(String item, int weight, int value) {
            this.item = item;
            this.weight = weight;
            this.value = value;
        }
    }

    public static void solve_knapsack(int knapsackWeight, Item[] items) {

        int N = items.length;
        int W = knapsackWeight;

        int[][] table = new int[N + 1][W + 1];

        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= W; j++) {
                if (items[i - 1].weight > j) {
                    table[i][j] = table[i - 1][j];
                } else {
                    table[i][j] = Math.max(
                        table[i - 1][j], 
                        table[i - 1][j - items[i - 1].weight] + items[i - 1].value);
                }
            }
        }

        int maxVal = table[N][W];
        int i = N;
        int j = W;
        while (i > 0 && maxVal > 0) {
            if (maxVal != table[i - 1][j]) {
                System.out.println("Item " + i + " is included in the collection");
                maxVal -= items[i - 1].value;
                j -= items[i - 1].weight;
            }
            i--;
        }
    }

    public static void main(String args[]) {
        Item[] items = {
            new Item("A", 2, 3),
            new Item("B", 3, 4),
            new Item("C", 4, 5),
            new Item("D", 5, 8),
            new Item("E", 9, 10)
        };
        int knapsackWeight = 10;

        knapsack_problem.solve_knapsack(knapsackWeight, items);
    }
}